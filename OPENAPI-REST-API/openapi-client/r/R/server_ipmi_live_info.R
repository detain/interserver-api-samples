#' Create a new ServerIpmiLiveInfo
#'
#' @description
#' Information about the IPMI connection.
#'
#' @docType class
#' @title ServerIpmiLiveInfo
#' @description ServerIpmiLiveInfo Class
#' @format An \code{R6Class} generator object
#' @field text  character [optional]
#' @field public_ip  character [optional]
#' @field allowed_ip  character [optional]
#' @field client_username  character [optional]
#' @field client_password  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ServerIpmiLiveInfo <- R6::R6Class(
  "ServerIpmiLiveInfo",
  public = list(
    `text` = NULL,
    `public_ip` = NULL,
    `allowed_ip` = NULL,
    `client_username` = NULL,
    `client_password` = NULL,

    #' @description
    #' Initialize a new ServerIpmiLiveInfo class.
    #'
    #' @param text text
    #' @param public_ip public_ip
    #' @param allowed_ip allowed_ip
    #' @param client_username client_username
    #' @param client_password client_password
    #' @param ... Other optional arguments.
    initialize = function(`text` = NULL, `public_ip` = NULL, `allowed_ip` = NULL, `client_username` = NULL, `client_password` = NULL, ...) {
      if (!is.null(`text`)) {
        if (!(is.character(`text`) && length(`text`) == 1)) {
          stop(paste("Error! Invalid data for `text`. Must be a string:", `text`))
        }
        self$`text` <- `text`
      }
      if (!is.null(`public_ip`)) {
        if (!(is.character(`public_ip`) && length(`public_ip`) == 1)) {
          stop(paste("Error! Invalid data for `public_ip`. Must be a string:", `public_ip`))
        }
        self$`public_ip` <- `public_ip`
      }
      if (!is.null(`allowed_ip`)) {
        if (!(is.character(`allowed_ip`) && length(`allowed_ip`) == 1)) {
          stop(paste("Error! Invalid data for `allowed_ip`. Must be a string:", `allowed_ip`))
        }
        self$`allowed_ip` <- `allowed_ip`
      }
      if (!is.null(`client_username`)) {
        if (!(is.character(`client_username`) && length(`client_username`) == 1)) {
          stop(paste("Error! Invalid data for `client_username`. Must be a string:", `client_username`))
        }
        self$`client_username` <- `client_username`
      }
      if (!is.null(`client_password`)) {
        if (!(is.character(`client_password`) && length(`client_password`) == 1)) {
          stop(paste("Error! Invalid data for `client_password`. Must be a string:", `client_password`))
        }
        self$`client_password` <- `client_password`
      }
    },

    #' @description
    #' Convert to an R object. This method is deprecated. Use `toSimpleType()` instead.
    toJSON = function() {
      .Deprecated(new = "toSimpleType", msg = "Use the '$toSimpleType()' method instead since that is more clearly named. Use '$toJSONString()' to get a JSON string")
      return(self$toSimpleType())
    },

    #' @description
    #' Convert to a List
    #'
    #' Convert the R6 object to a list to work more easily with other tooling.
    #'
    #' @return ServerIpmiLiveInfo as a base R list.
    #' @examples
    #' # convert array of ServerIpmiLiveInfo (x) to a data frame
    #' \dontrun{
    #' library(purrr)
    #' library(tibble)
    #' df <- x |> map(\(y)y$toList()) |> map(as_tibble) |> list_rbind()
    #' df
    #' }
    toList = function() {
      return(self$toSimpleType())
    },

    #' @description
    #' Convert ServerIpmiLiveInfo to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ServerIpmiLiveInfoObject <- list()
      if (!is.null(self$`text`)) {
        ServerIpmiLiveInfoObject[["text"]] <-
          self$`text`
      }
      if (!is.null(self$`public_ip`)) {
        ServerIpmiLiveInfoObject[["public_ip"]] <-
          self$`public_ip`
      }
      if (!is.null(self$`allowed_ip`)) {
        ServerIpmiLiveInfoObject[["allowed_ip"]] <-
          self$`allowed_ip`
      }
      if (!is.null(self$`client_username`)) {
        ServerIpmiLiveInfoObject[["client_username"]] <-
          self$`client_username`
      }
      if (!is.null(self$`client_password`)) {
        ServerIpmiLiveInfoObject[["client_password"]] <-
          self$`client_password`
      }
      return(ServerIpmiLiveInfoObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerIpmiLiveInfo
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerIpmiLiveInfo
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`text`)) {
        self$`text` <- this_object$`text`
      }
      if (!is.null(this_object$`public_ip`)) {
        self$`public_ip` <- this_object$`public_ip`
      }
      if (!is.null(this_object$`allowed_ip`)) {
        self$`allowed_ip` <- this_object$`allowed_ip`
      }
      if (!is.null(this_object$`client_username`)) {
        self$`client_username` <- this_object$`client_username`
      }
      if (!is.null(this_object$`client_password`)) {
        self$`client_password` <- this_object$`client_password`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ServerIpmiLiveInfo in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerIpmiLiveInfo
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerIpmiLiveInfo
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`text` <- this_object$`text`
      self$`public_ip` <- this_object$`public_ip`
      self$`allowed_ip` <- this_object$`allowed_ip`
      self$`client_username` <- this_object$`client_username`
      self$`client_password` <- this_object$`client_password`
      self
    },

    #' @description
    #' Validate JSON input with respect to ServerIpmiLiveInfo and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ServerIpmiLiveInfo
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      TRUE
    },

    #' @description
    #' Return a list of invalid fields (if any).
    #'
    #' @return A list of invalid fields (if any).
    getInvalidFields = function() {
      invalid_fields <- list()
      invalid_fields
    },

    #' @description
    #' Print the object
    print = function() {
      print(jsonlite::prettify(self$toJSONString()))
      invisible(self)
    }
  ),
  # Lock the class to prevent modifications to the method or field
  lock_class = TRUE
)
## Uncomment below to unlock the class to allow modifications of the method or field
# ServerIpmiLiveInfo$unlock()
#
## Below is an example to define the print function
# ServerIpmiLiveInfo$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ServerIpmiLiveInfo$lock()

