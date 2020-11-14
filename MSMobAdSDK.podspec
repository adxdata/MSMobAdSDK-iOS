Pod::Spec.new do |s|
  s.name        = 'MSMobAdSDK'
  s.version     = '1.0.0.14'
  s.summary     = 'Mobile AD SDK For iOS.'
  s.homepage    = 'https://github.com/adxdata/MSMobAdSDK-iOS'
  s.license     = 'MIT'
  s.author      = { 'Lei Dai' => 'dailei@adxdata.com' }
  s.platform    = :ios, '9.0'
  s.source      = { :git => 'https://git.adxdata.com/meishu/MSMobAdSDK-iOS.git', :tag => "#{s.version}" }

  s.default_subspecs  = 'MS'

  s.subspec 'MS' do |sp|
    sp.frameworks   = 'AdSupport', 'AVFoundation', 'CoreLocation', 'CoreTelephony', 'Foundation', 'StoreKit', 'UIKit', 'WebKit'

    sp.vendored_frameworks  = 'MSMobAdSDK/MSAdSDK.framework'
    sp.resources            = 'MSMobAdSDK/MSAdSDK.bundle'
  end

  s.subspec 'BD' do |sp|
    sp.frameworks   = 'AdSupport', 'AVFoundation', 'CoreLocation', 'CoreMedia', 'CoreMotion', 'CoreTelephony', 'MessageUI', 'SafariServices', 'StoreKit', 'SystemConfiguration'
    sp.libraries    = 'c++'

    sp.vendored_frameworks  = 'BaiduMobAdSDK/BaiduMobAdSDK.framework'
    sp.resources            = 'BaiduMobAdSDK/baidumobadsdk.bundle'

    sp.dependency "#{s.name}/MS"
  end

  s.subspec 'CSJ' do |sp|
    sp.dependency "#{s.name}/MS"
    sp.dependency 'Bytedance-UnionAD', '~> 3.2.0'
  end

  s.subspec 'GDT' do |sp|
    sp.dependency "#{s.name}/MS"
    sp.dependency 'GDTMobSDK', '4.11.10'
  end

end
