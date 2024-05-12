/* configMenuClient.h */
#define CONFIGMENU_ITEM_CHARS 40

typedef void (*callbackFunc)(int status, void *puserPvt);
extern int fdbrestoreX(const char *filename, const char *macrostring, callbackFunc callbackFunction, void *puserPvt);
extern char *getMacroString(const char *request_file);
extern int manual_save(const char *request_file, const char *save_file, callbackFunc callbackFunction, void *puserPvt);
extern int findConfigFiles(const char *config, ELLLIST *configMenuList);

struct configFileListItem {
    ELLNODE node;
	char *name;
	char *description;
};
