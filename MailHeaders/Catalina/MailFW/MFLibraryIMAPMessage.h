//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/MFLibraryMessage.h>

@class MCMessageHeaders, MFIMAPAccount;

@interface MFLibraryIMAPMessage : MFLibraryMessage
{
    MCMessageHeaders *_headers;	// 104 = 0x68
}

// - (void).cxx_destruct;	// IMP=0x000000000010d91e
@property(readonly, nonatomic) MFIMAPAccount *account;
- (void)setDataSource:(id)arg1;	// IMP=0x000000000010d7a3
- (id)dataSource;	// IMP=0x000000000010d774
- (void)setHeaders:(id)arg1;	// IMP=0x000000000010d6fa
- (id)headersFetchIfNotAvailable:(BOOL)arg1;	// IMP=0x000000000010d610

@end
