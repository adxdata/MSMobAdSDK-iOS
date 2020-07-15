Pod::Spec.new do |s|
  s.name        = 'MSMobAdSDK'
  s.version     = '0.8.72.2'
  s.summary     = 'Mobile AD SDK For iOS.'
  s.homepage    = 'https://github.com/adxdata/MSMobAdSDK-iOS'
  s.license     = 'MIT'
  s.author      = { 'Lei Dai' => 'dailei@adxdata.com' }
  s.platform    = :ios, '9.0'
  s.source      = { :git => 'https://git.adxdata.com/meishu/MSMobAdSDK-iOS.git', :tag => "#{s.version}" }

  s.frameworks  = 'AdSupport', 'AVFoundation', 'CoreLocation', 'CoreMedia', 'CoreMotion', 'CoreTelephony', 'MessageUI', 'QuartzCore', 'SafariServices', 'Security', 'StoreKit', 'SystemConfiguration', 'WebKit'
  s.libraries   = 'c++', 'resolv.9', 'xml2', 'z'

  s.default_subspecs  = 'union'

  s.subspec 'union' do |sp|
    sp.vendored_frameworks  = 'MSMobAdSDK/union/MSAdSDK.framework', 'BaiduMobAdSDK/BaiduMobAdSDK.framework'
    sp.resources            = 'MSMobAdSDK/union/MSBundle.bundle', 'BaiduMobAdSDK/BaiduMobAdSDK.bundle'

    sp.dependency 'AFNetworking'
    sp.dependency 'Bytedance-UnionAD', '~>3.1.0.0'
    sp.dependency 'GDTMobSDK', '4.11.9'
  end

  s.subspec 'meishu' do |sp|
    sp.vendored_frameworks  = 'MSMobAdSDK/meishu/MSAdSDK.framework'
    sp.resources            = 'MSMobAdSDK/meishu/MSBundle.bundle'
  end

  s.subspec 'enai' do |sp|
    sp.vendored_frameworks  = 'MSMobAdSDK/enai/MSAdSDK.framework', 'BaiduMobAdSDK/BaiduMobAdSDK.framework'
    sp.resources            = 'MSMobAdSDK/enai/MSBundle.bundle', 'BaiduMobAdSDK/BaiduMobAdSDK.bundle'

    sp.dependency 'AFNetworking'
  end
end
