//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFIMAPAccount, NSArray;

@interface _MFIMAPMailboxDeletionQueueEntry : NSObject
{
    NSArray *_urls;	// 8 = 0x8
    NSArray *_paths;	// 16 = 0x10
    MFIMAPAccount *_account;	// 24 = 0x18
}

@property(retain, nonatomic) MFIMAPAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) NSArray *paths; // @synthesize paths=_paths;
@property(retain, nonatomic) NSArray *urls; // @synthesize urls=_urls;
// - (void).cxx_destruct;	// IMP=0x00000000000b309d

@end
