Pod::Spec.new do |s|
  s.name        = 'MSMobAdSDK'
  s.version     = '0.8.63'
  s.summary     = 'Mobile AD SDK For iOS.'
  #s.homepage    = 'https://github.com/adxdata/MSMobAdSDK-iOS'
  s.homepage    = 'https://git.adxdata.com/meishu/MSMobAdSDK-iOS'
  s.license     = 'MIT'
  s.author      = { 'Lei Dai' => 'dailei@adxdata.com' }
  s.platform    = :ios, '9.0'
  s.source      = { :git => 'https://github.com/adxdata/MSMobAdSDK-iOS.git', :tag => "#{s.version}" }

  s.frameworks  = 'AdSupport', 'AVFoundation', 'CoreLocation', 'CoreMedia', 'CoreMotion', 'CoreTelephony', 'MessageUI', 'QuartzCore', 'SafariServices', 'Security', 'StoreKit', 'SystemConfiguration', 'WebKit'
  s.libraries   = 'c++', 'resolv.9', 'xml2', 'z'

  s.default_subspecs  = 'union'

  s.subspec 'union' do |sp|
    sp.vendored_frameworks  = 'MSMobAdSDK/union/MSAdSDK.framework', 'BaiduMobAdSDK/BaiduMobAdSDK.framework'
    sp.resources            = 'MSMobAdSDK/union/MSBundle.bundle', 'BaiduMobAdSDK/BaiduMobAdSDK.bundle'

    sp.dependency 'Bytedance-UnionAD', '~>2.9.0.0'
    sp.dependency 'GDTMobSDK', '4.11.5'
  end

  s.subspec 'meishu' do |sp|
    sp.vendored_frameworks  = 'MSMobAdSDK/meishu/MSAdSDK.framework'
    sp.resources            = 'MSMobAdSDK/meishu/MSBundle.bundle'
  end
end
