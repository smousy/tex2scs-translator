#pragma once

#include <unordered_map>
#include <unordered_set>

#include "sc_scn_tex_command_defines.h"

using ScSCnTexCommands = std::unordered_map<std::string, ScSCnTexCommand *>;

static ScSCnTexCommands const commands = {
    { "textit", new ScSCnTexTextitCommand() },
    { "textb", new ScSCnTexTextbCommand() },
    { "uline", new ScSCnTexUlineCommand() },
    { "\\", new ScSCnTexNewLineCommand() },
    { "begin", new ScSCnTexBeginListCommand() },
    { "item", new ScSCnTexListItemCommand() },
    { "end", new ScSCnTexEndListCommand() },

    { "scnheader", new ScSCnTexHeaderCommand() },
    { "scnstructheader", new ScSCnTexStructHeaderCommand() },
    { "scnsectionheader", new ScSCnTexSectionHeaderCommand() },
    { "scnsegmentheader", new ScSCnTexSegmentHeaderCommand() },

    { "scntext", new ScSCnTexTextRelationCommand() },
    { "scnidtf", new ScSCnTexIdtfCommand() },
    { "scnnote", new ScSCnTexNoteCommand() },
    { "scnexplanation", new ScSCnTexExplanationCommand() },

    { "scniselement", new ScSCnTexIsElementCommand() },
    { "scnhaselement", new ScSCnTexHasElementCommand() },
    { "scnhaselementset", new ScSCnTexHasElementSetCommand() },
    { "scnrelto", new ScSCnTexNrelToCommand() },
    { "scnsuperset", new ScSCnTexSupersetCommand() },
    { "scnrelfrom", new ScSCnTexNrelFromCommand() },
    { "scnsubset", new ScSCnTexSubsetCommand() },
    { "scnrelfromset", new ScSCnTexNrelFromSetCommand() },
    { "scnrelfromlist", new ScSCnTexNrelFromListCommand() },
    { "scnrelfromvector", new ScSCnTexNrelFromVectorCommand() },

    { "scnfileitem", new ScSCnTexFileItemCommand() },

    { "scnaddlevel", new ScSCnTexAddLevelCommand() },
};

using ScSCnTexIgnoreCommands = std::unordered_set<std::string>;

static ScSCnTexIgnoreCommands const ignoreCommands = {
    "newpage", "scnbigspace", "bigskip", "mbox", "label", "scncite", "nameref",
};
