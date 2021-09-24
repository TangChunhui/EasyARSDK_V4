#
# Be sure to run `pod lib lint EasyARSDK_V4.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'EasyARSDK_V4'
  s.version          = '0.1.0'
  s.summary          = 'easyar sdk'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/TangChunhui/EasyARSDK_V4'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'TangChunhui' => '1203720671@qq.com' }
  s.source           = { :git => 'https://github.com/TangChunhui/EasyARSDK_V4.git', :tag => s.version.to_s }

  s.platform         = :ios
  s.ios.deployment_target = '9.0'

  s.frameworks = "Accelerate", "GLKit", "AVFoundation", "CoreGraphics", "CoreImage", "CoreMedia", "CoreVideo", "OpenGLES", "QuartzCore", "UIKit", "CoreMotion", "ARKit"
  s.vendored_frameworks = 'Sources/easyar.framework'
  s.libraries = 'c++'
  s.requires_arc = true
  
end
