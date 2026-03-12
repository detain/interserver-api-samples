#' Create a new ConfigIds
#'
#' @description
#' Internal configuration IDs mapped from the selected form values for a server order.
#'
#' @docType class
#' @title ConfigIds
#' @description ConfigIds Class
#' @format An \code{R6Class} generator object
#' @field memory Configuration ID for the selected memory option. integer [optional]
#' @field hd Configuration ID for the selected hard drive option. integer [optional]
#' @field bandwidth Configuration ID for the selected bandwidth option. integer [optional]
#' @field ips Configuration ID for the selected IP block option. integer [optional]
#' @field os Configuration ID for the selected operating system. integer [optional]
#' @field cp Configuration ID for the selected control panel. integer [optional]
#' @field raid Configuration ID for the selected RAID option. integer [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ConfigIds <- R6::R6Class(
  "ConfigIds",
  public = list(
    `memory` = NULL,
    `hd` = NULL,
    `bandwidth` = NULL,
    `ips` = NULL,
    `os` = NULL,
    `cp` = NULL,
    `raid` = NULL,

    #' @description
    #' Initialize a new ConfigIds class.
    #'
    #' @param memory Configuration ID for the selected memory option.
    #' @param hd Configuration ID for the selected hard drive option.
    #' @param bandwidth Configuration ID for the selected bandwidth option.
    #' @param ips Configuration ID for the selected IP block option.
    #' @param os Configuration ID for the selected operating system.
    #' @param cp Configuration ID for the selected control panel.
    #' @param raid Configuration ID for the selected RAID option.
    #' @param ... Other optional arguments.
    initialize = function(`memory` = NULL, `hd` = NULL, `bandwidth` = NULL, `ips` = NULL, `os` = NULL, `cp` = NULL, `raid` = NULL, ...) {
      if (!is.null(`memory`)) {
        if (!(is.numeric(`memory`) && length(`memory`) == 1)) {
          stop(paste("Error! Invalid data for `memory`. Must be an integer:", `memory`))
        }
        self$`memory` <- `memory`
      }
      if (!is.null(`hd`)) {
        if (!(is.numeric(`hd`) && length(`hd`) == 1)) {
          stop(paste("Error! Invalid data for `hd`. Must be an integer:", `hd`))
        }
        self$`hd` <- `hd`
      }
      if (!is.null(`bandwidth`)) {
        if (!(is.numeric(`bandwidth`) && length(`bandwidth`) == 1)) {
          stop(paste("Error! Invalid data for `bandwidth`. Must be an integer:", `bandwidth`))
        }
        self$`bandwidth` <- `bandwidth`
      }
      if (!is.null(`ips`)) {
        if (!(is.numeric(`ips`) && length(`ips`) == 1)) {
          stop(paste("Error! Invalid data for `ips`. Must be an integer:", `ips`))
        }
        self$`ips` <- `ips`
      }
      if (!is.null(`os`)) {
        if (!(is.numeric(`os`) && length(`os`) == 1)) {
          stop(paste("Error! Invalid data for `os`. Must be an integer:", `os`))
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
        if (!(is.numeric(`raid`) && length(`raid`) == 1)) {
          stop(paste("Error! Invalid data for `raid`. Must be an integer:", `raid`))
        }
        self$`raid` <- `raid`
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
    #' @return ConfigIds as a base R list.
    #' @examples
    #' # convert array of ConfigIds (x) to a data frame
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
    #' Convert ConfigIds to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ConfigIdsObject <- list()
      if (!is.null(self$`memory`)) {
        ConfigIdsObject[["memory"]] <-
          self$`memory`
      }
      if (!is.null(self$`hd`)) {
        ConfigIdsObject[["hd"]] <-
          self$`hd`
      }
      if (!is.null(self$`bandwidth`)) {
        ConfigIdsObject[["bandwidth"]] <-
          self$`bandwidth`
      }
      if (!is.null(self$`ips`)) {
        ConfigIdsObject[["ips"]] <-
          self$`ips`
      }
      if (!is.null(self$`os`)) {
        ConfigIdsObject[["os"]] <-
          self$`os`
      }
      if (!is.null(self$`cp`)) {
        ConfigIdsObject[["cp"]] <-
          self$`cp`
      }
      if (!is.null(self$`raid`)) {
        ConfigIdsObject[["raid"]] <-
          self$`raid`
      }
      return(ConfigIdsObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of ConfigIds
    #'
    #' @param input_json the JSON input
    #' @return the instance of ConfigIds
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`memory`)) {
        self$`memory` <- this_object$`memory`
      }
      if (!is.null(this_object$`hd`)) {
        self$`hd` <- this_object$`hd`
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
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ConfigIds in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ConfigIds
    #'
    #' @param input_json the JSON input
    #' @return the instance of ConfigIds
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`memory` <- this_object$`memory`
      self$`hd` <- this_object$`hd`
      self$`bandwidth` <- this_object$`bandwidth`
      self$`ips` <- this_object$`ips`
      self$`os` <- this_object$`os`
      self$`cp` <- this_object$`cp`
      self$`raid` <- this_object$`raid`
      self
    },

    #' @description
    #' Validate JSON input with respect to ConfigIds and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ConfigIds
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
# ConfigIds$unlock()
#
## Below is an example to define the print function
# ConfigIds$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ConfigIds$lock()

