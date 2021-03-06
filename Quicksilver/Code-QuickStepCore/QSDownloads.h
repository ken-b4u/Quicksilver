//
//  QSDownloads.h
//  Quicksilver
//
//  Created by Rob McBroom on 4/8/11.
//
//  This class should be used to manage anything having to do with
//  the user's Downloads folder.
//

#import "QSObject.h"

@interface QSDownloads : NSObject <QSProxyObjectProvider> {
}
+ (NSURL *)downloadsLocation;
+ (NSArray *)iCloudDocumentsForBundleID:(NSString *)bundleIdentifier;
@end
