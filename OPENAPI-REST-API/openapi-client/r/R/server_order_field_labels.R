#' Create a new ServerOrderFieldLabels
#'
#' @description
#' Field labels for the server order.
#'
#' @docType class
#' @title ServerOrderFieldLabels
#' @description ServerOrderFieldLabels Class
#' @format An \code{R6Class} generator object
#' @field bandwidth Bandwidth field label. \link{ServerOrderFieldLabel} [optional]
#' @field ips IPs field label. \link{ServerOrderFieldLabel} [optional]
#' @field os Operating System field label. \link{ServerOrderFieldLabel} [optional]
#' @field cp Control Panel field label. \link{ServerOrderFieldLabel} [optional]
#' @field raid RAID field label. \link{ServerOrderFieldLabel} [optional]
#' @field memory Memory field label. \link{ServerOrderFieldLabel} [optional]
#' @field hd Hard Drives field label \link{ServerOrderFieldLabel} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ServerOrderFieldLabels <- R6::R6Class(
  "ServerOrderFieldLabels",
  public = list(
    `bandwidth` = NULL,
    `ips` = NULL,
    `os` = NULL,
    `cp` = NULL,
    `raid` = NULL,
    `memory` = NULL,
    `hd` = NULL,

    #' @description
    #' Initialize a new ServerOrderFieldLabels class.
    #'
    #' @param bandwidth Bandwidth field label.
    #' @param ips IPs field label.
    #' @param os Operating System field label.
    #' @param cp Control Panel field label.
    #' @param raid RAID field label.
    #' @param memory Memory field label.
    #' @param hd Hard Drives field label
    #' @param ... Other optional arguments.
    initialize = function(`bandwidth` = NULL, `ips` = NULL, `os` = NULL, `cp` = NULL, `raid` = NULL, `memory` = NULL, `hd` = NULL, ...) {
      if (!is.null(`bandwidth`)) {
        stopifnot(R6::is.R6(`bandwidth`))
        self$`bandwidth` <- `bandwidth`
      }
      if (!is.null(`ips`)) {
        stopifnot(R6::is.R6(`ips`))
        self$`ips` <- `ips`
      }
      if (!is.null(`os`)) {
        stopifnot(R6::is.R6(`os`))
        self$`os` <- `os`
      }
      if (!is.null(`cp`)) {
        stopifnot(R6::is.R6(`cp`))
        self$`cp` <- `cp`
      }
      if (!is.null(`raid`)) {
        stopifnot(R6::is.R6(`raid`))
        self$`raid` <- `raid`
      }
      if (!is.null(`memory`)) {
        stopifnot(R6::is.R6(`memory`))
        self$`memory` <- `memory`
      }
      if (!is.null(`hd`)) {
        stopifnot(R6::is.R6(`hd`))
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
    #' @return ServerOrderFieldLabels as a base R list.
    #' @examples
    #' # convert array of ServerOrderFieldLabels (x) to a data frame
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
    #' Convert ServerOrderFieldLabels to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ServerOrderFieldLabelsObject <- list()
      if (!is.null(self$`bandwidth`)) {
        ServerOrderFieldLabelsObject[["bandwidth"]] <-
          self$extractSimpleType(self$`bandwidth`)
      }
      if (!is.null(self$`ips`)) {
        ServerOrderFieldLabelsObject[["ips"]] <-
          self$extractSimpleType(self$`ips`)
      }
      if (!is.null(self$`os`)) {
        ServerOrderFieldLabelsObject[["os"]] <-
          self$extractSimpleType(self$`os`)
      }
      if (!is.null(self$`cp`)) {
        ServerOrderFieldLabelsObject[["cp"]] <-
          self$extractSimpleType(self$`cp`)
      }
      if (!is.null(self$`raid`)) {
        ServerOrderFieldLabelsObject[["raid"]] <-
          self$extractSimpleType(self$`raid`)
      }
      if (!is.null(self$`memory`)) {
        ServerOrderFieldLabelsObject[["memory"]] <-
          self$extractSimpleType(self$`memory`)
      }
      if (!is.null(self$`hd`)) {
        ServerOrderFieldLabelsObject[["hd"]] <-
          self$extractSimpleType(self$`hd`)
      }
      return(ServerOrderFieldLabelsObject)
    },

    extractSimpleType = function(x) {
      if (R6::is.R6(x)) {
        return(x$toSimpleType())
      } else if (!self$hasNestedR6(x)) {
        return(x)
      }
      lapply(x, self$extractSimpleType)
    },

    hasNestedR6 = function(x) {
      if (R6::is.R6(x)) {
        return(TRUE)
      }
      if (is.list(x)) {
        for (item in x) {
          if (self$hasNestedR6(item)) {
            return(TRUE)
          }
        }
      }
      FALSE
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerOrderFieldLabels
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerOrderFieldLabels
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`bandwidth`)) {
        `bandwidth_object` <- ServerOrderFieldLabel$new()
        `bandwidth_object`$fromJSON(jsonlite::toJSON(this_object$`bandwidth`, auto_unbox = TRUE, digits = NA))
        self$`bandwidth` <- `bandwidth_object`
      }
      if (!is.null(this_object$`ips`)) {
        `ips_object` <- ServerOrderFieldLabel$new()
        `ips_object`$fromJSON(jsonlite::toJSON(this_object$`ips`, auto_unbox = TRUE, digits = NA))
        self$`ips` <- `ips_object`
      }
      if (!is.null(this_object$`os`)) {
        `os_object` <- ServerOrderFieldLabel$new()
        `os_object`$fromJSON(jsonlite::toJSON(this_object$`os`, auto_unbox = TRUE, digits = NA))
        self$`os` <- `os_object`
      }
      if (!is.null(this_object$`cp`)) {
        `cp_object` <- ServerOrderFieldLabel$new()
        `cp_object`$fromJSON(jsonlite::toJSON(this_object$`cp`, auto_unbox = TRUE, digits = NA))
        self$`cp` <- `cp_object`
      }
      if (!is.null(this_object$`raid`)) {
        `raid_object` <- ServerOrderFieldLabel$new()
        `raid_object`$fromJSON(jsonlite::toJSON(this_object$`raid`, auto_unbox = TRUE, digits = NA))
        self$`raid` <- `raid_object`
      }
      if (!is.null(this_object$`memory`)) {
        `memory_object` <- ServerOrderFieldLabel$new()
        `memory_object`$fromJSON(jsonlite::toJSON(this_object$`memory`, auto_unbox = TRUE, digits = NA))
        self$`memory` <- `memory_object`
      }
      if (!is.null(this_object$`hd`)) {
        `hd_object` <- ServerOrderFieldLabel$new()
        `hd_object`$fromJSON(jsonlite::toJSON(this_object$`hd`, auto_unbox = TRUE, digits = NA))
        self$`hd` <- `hd_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ServerOrderFieldLabels in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerOrderFieldLabels
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerOrderFieldLabels
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`bandwidth` <- ServerOrderFieldLabel$new()$fromJSON(jsonlite::toJSON(this_object$`bandwidth`, auto_unbox = TRUE, digits = NA))
      self$`ips` <- ServerOrderFieldLabel$new()$fromJSON(jsonlite::toJSON(this_object$`ips`, auto_unbox = TRUE, digits = NA))
      self$`os` <- ServerOrderFieldLabel$new()$fromJSON(jsonlite::toJSON(this_object$`os`, auto_unbox = TRUE, digits = NA))
      self$`cp` <- ServerOrderFieldLabel$new()$fromJSON(jsonlite::toJSON(this_object$`cp`, auto_unbox = TRUE, digits = NA))
      self$`raid` <- ServerOrderFieldLabel$new()$fromJSON(jsonlite::toJSON(this_object$`raid`, auto_unbox = TRUE, digits = NA))
      self$`memory` <- ServerOrderFieldLabel$new()$fromJSON(jsonlite::toJSON(this_object$`memory`, auto_unbox = TRUE, digits = NA))
      self$`hd` <- ServerOrderFieldLabel$new()$fromJSON(jsonlite::toJSON(this_object$`hd`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to ServerOrderFieldLabels and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ServerOrderFieldLabels
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
# ServerOrderFieldLabels$unlock()
#
## Below is an example to define the print function
# ServerOrderFieldLabels$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ServerOrderFieldLabels$lock()

