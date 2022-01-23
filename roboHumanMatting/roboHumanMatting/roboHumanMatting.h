//
//  roboHumanMatting.h
//  roboHumanMatting
//
//  Created by apple on 1/22/22.
//

#import <Foundation/Foundation.h>

//! Project version number for roboHumanMatting.
FOUNDATION_EXPORT double roboHumanMattingVersionNumber;

//! Project version string for roboHumanMatting.
FOUNDATION_EXPORT const unsigned char roboHumanMattingVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <roboHumanMatting/PublicHeader.h>

@interface robustVideoMatting : NSObject

- (void)loadModel;
-(NSImage *)predictImage:(NSImage *)image outForeground:(NSImage **)outForeground;

@end
