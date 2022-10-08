#include "sc_scn_tex_file_image_command.h"

ScScnTexCommandResult ScSCnTexFileImageCommand::Complete(
    ScSCnCommandsHistory & history,
    ScSCnPrefixTree & tree,
    ScScnTexCommandParams const & params)
{
  std::string const & content = params.at(1);

  return SCsStream().Row([&content]() -> SCsStream {
    return {"\"", content, "\""};
  });
}