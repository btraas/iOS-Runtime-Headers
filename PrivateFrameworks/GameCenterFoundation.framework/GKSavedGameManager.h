/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSMetadataQuery, NSMutableArray, NSMutableDictionary, NSURL;

@interface GKSavedGameManager : NSObject {
    NSMutableDictionary *_documents;
    NSMutableArray *_fetchHandlers;
    NSMetadataQuery *_query;
    long long _queryDisableCount;
    NSURL *_ubiquityURL;
    bool_ubiquityUnavailable;
}

@property(retain) NSMutableDictionary * documents;
@property(retain) NSMutableArray * fetchHandlers;
@property(retain) NSMetadataQuery * query;
@property long long queryDisableCount;
@property(retain) NSURL * ubiquityURL;
@property bool ubiquityUnavailable;

+ (id)sharedManager;

- (void)addDocument:(id)arg1;
- (void)callFetchHandlers;
- (id)currentDocumentWithName:(id)arg1;
- (void)dealloc;
- (void)deleteSavedGamesWithName:(id)arg1 completionHandler:(id)arg2;
- (void)disableQueryUpdates;
- (void)documentConflictStateChanged:(id)arg1;
- (id)documentForSavedGame:(id)arg1;
- (void)documentModified:(id)arg1;
- (id)documentToSaveWithName:(id)arg1;
- (id)documents;
- (void)enableQueryUpdates;
- (id)errorForNoUbiquity;
- (id)fetchHandlers;
- (void)fetchSavedGamesWithCompletionHandler:(id)arg1;
- (id)fileURLForName:(id)arg1;
- (id)init;
- (void)loadDataForSavedGame:(id)arg1 completionHandler:(id)arg2;
- (id)query;
- (void)queryDidFinishGathering:(id)arg1;
- (void)queryDidUpdate:(id)arg1;
- (long long)queryDisableCount;
- (void)removeDocument:(id)arg1;
- (void)resolveConflictingSavedGames:(id)arg1 withData:(id)arg2 completionHandler:(id)arg3;
- (void)saveGameData:(id)arg1 withName:(id)arg2 completionHandler:(id)arg3;
- (id)savedGameForDocument:(id)arg1;
- (id)savedGameForDocuments:(id)arg1;
- (id)savedGamesWithName:(id)arg1;
- (void)setDocuments:(id)arg1;
- (void)setFetchHandlers:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryDisableCount:(long long)arg1;
- (void)setUbiquityURL:(id)arg1;
- (void)setUbiquityUnavailable:(bool)arg1;
- (void)setupUbiquity;
- (void)startSavedGameQuery;
- (void)ubiquityAvailabilityChanged:(id)arg1;
- (id)ubiquityURL;
- (bool)ubiquityUnavailable;
- (void)updateSavedGameDocumentsForQueryWithHandler:(id)arg1;

@end