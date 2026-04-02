#' Create a new ServerOrderConfigIds
#'
#' @description
#' Configuration IDs for the server order.
#'
#' @docType class
#' @title ServerOrderConfigIds
#' @description ServerOrderConfigIds Class
#' @format An \code{R6Class} generator object
#' @field memory Memory configuration ID for the server order. integer [optional]
#' @field bandwidth Bandwidth configuration ID for the server order. character [optional]
#' @field ips IPs configuration ID for the server order. character [optional]
#' @field os Operating System configuration ID for the server order. character [optional]
#' @field cp Control Panel configuration ID for the server order. integer [optional]
#' @field raid RAID configuration ID for the server order. character [optional]
#' @field hd Hard Drives configuration ID for the server order. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ServerOrderConfigIds <- R6::R6Class(
  "ServerOrderConfigIds",
  public = list(
    `memory` = NULL,
    `bandwidth` = NULL,
    `ips` = NULL,
    `os` = NULL,
    `cp` = NULL,
    `raid` = NULL,
    `hd` = NULL,

    #' @description
    #' Initialize a new ServerOrderConfigIds class.
    #'
    #' @param memory Memory configuration ID for the server order.
    #' @param bandwidth Bandwidth configuration ID for the server order.
    #' @param ips IPs configuration ID for the server order.
    #' @param os Operating System configuration ID for the server order.
    #' @param cp Control Panel configuration ID for the server order.
    #' @param raid RAID configuration ID for the server order.
    #' @param hd Hard Drives configuration ID for the server order.
    #' @param ... Other optional arguments.
    initialize = function(`memory` = NULL, `bandwidth` = NULL, `ips` = NULL, `os` = NULL, `cp` = NULL, `raid` = NULL, `hd` = NULL, ...) {
      if (!is.null(`memory`)) {
        if (!(is.numeric(`memory`) && length(`memory`) == 1)) {
          stop(paste("Error! Invalid data for `memory`. Must be an integer:", `memory`))
        }
        self$`memory` <- `memory`
      }
      if (!is.null(`bandwidth`)) {
        if (!(is.character(`bandwidth`) && length(`bandwidth`) == 1)) {
          stop(paste("Error! Invalid data for `bandwidth`. Must be a string:", `bandwidth`))
        }
        self$`bandwidth` <- `bandwidth`
      }
      if (!is.null(`ips`)) {
        if (!(is.character(`ips`) && length(`ips`) == 1)) {
          stop(paste("Error! Invalid data for `ips`. Must be a string:", `ips`))
        }
        self$`ips` <- `ips`
      }
      if (!is.null(`os`)) {
        if (!(is.character(`os`) && length(`os`) == 1)) {
          stop(paste("Error! Invalid data for `os`. Must be a string:", `os`))
        }
        self$`os` <- `os`
      }
      if (!is.null(`cp`)) {
        if (!(is.numeric(`cp`) && length(`cp`) == 1)) {
          stop(paste("Error! Invalid data for `cp`. Must be an integer:", `cp`))
        }
        self$`cp` <- `cp`
      }
      if (!is.null(`raid`)) {
        if (!(is.character(`raid`) && length(`raid`) == 1)) {
          stop(paste("Error! Invalid data for `raid`. Must be a string:", `raid`))
        }
        self$`raid` <- `raid`
      }
      if (!is.null(`hd`)) {
        if (!(is.character(`hd`) && length(`hd`) == 1)) {
          stop(paste("Error! Invalid data for `hd`. Must be a string:", `hd`))
        }
        self$`hd` <- `hd`
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
    #' @return ServerOrderConfigIds as a base R list.
    #' @examples
    #' # convert array of ServerOrderConfigIds (x) to a data frame
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
    #' Convert ServerOrderConfigIds to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ServerOrderConfigIdsObject <- list()
      if (!is.null(self$`memory`)) {
        ServerOrderConfigIdsObject[["memory"]] <-
          self$`memory`
      }
      if (!is.null(self$`bandwidth`)) {
        ServerOrderConfigIdsObject[["bandwidth"]] <-
          self$`bandwidth`
      }
      if (!is.null(self$`ips`)) {
        ServerOrderConfigIdsObject[["ips"]] <-
          self$`ips`
      }
      if (!is.null(self$`os`)) {
        ServerOrderConfigIdsObject[["os"]] <-
          self$`os`
      }
      if (!is.null(self$`cp`)) {
        ServerOrderConfigIdsObject[["cp"]] <-
          self$`cp`
      }
      if (!is.null(self$`raid`)) {
        ServerOrderConfigIdsObject[["raid"]] <-
          self$`raid`
      }
      if (!is.null(self$`hd`)) {
        ServerOrderConfigIdsObject[["hd"]] <-
          self$`hd`
      }
      return(ServerOrderConfigIdsObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerOrderConfigIds
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerOrderConfigIds
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`memory`)) {
        self$`memory` <- this_object$`memory`
      }
      if (!is.null(this_object$`bandwidth`)) {
        self$`bandwidth` <- this_object$`bandwidth`
      }
      if (!is.null(this_object$`ips`)) {
        self$`ips` <- this_object$`ips`
      }
      if (!is.null(this_object$`os`)) {
        self$`os` <- this_object$`os`
      }
      if (!is.null(this_object$`cp`)) {
        self$`cp` <- this_object$`cp`
      }
      if (!is.null(this_object$`raid`)) {
        self$`raid` <- this_object$`raid`
      }
      if (!is.null(this_object$`hd`)) {
        self$`hd` <- this_object$`hd`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ServerOrderConfigIds in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerOrderConfigIds
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerOrderConfigIds
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`memory` <- this_object$`memory`
      self$`bandwidth` <- this_object$`bandwidth`
      self$`ips` <- this_object$`ips`
      self$`os` <- this_object$`os`
      self$`cp` <- this_object$`cp`
      self$`raid` <- this_object$`raid`
      self$`hd` <- this_object$`hd`
      self
    },

    #' @description
    #' Validate JSON input with respect to ServerOrderConfigIds and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ServerOrderConfigIds
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
# ServerOrderConfigIds$unlock()
#
## Below is an example to define the print function
# ServerOrderConfigIds$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ServerOrderConfigIds$lock()

