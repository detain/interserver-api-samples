#' Create a new VpsTemplateRow
#'
#' @description
#' A VPS OS Template.
#'
#' @docType class
#' @title VpsTemplateRow
#' @description VpsTemplateRow Class
#' @format An \code{R6Class} generator object
#' @field template_id  character [optional]
#' @field template_type  character [optional]
#' @field template_os  character [optional]
#' @field template_version  character [optional]
#' @field template_bits  character [optional]
#' @field template_file  character [optional]
#' @field template_available  character [optional]
#' @field template_name  character [optional]
#' @field template_dir  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
VpsTemplateRow <- R6::R6Class(
  "VpsTemplateRow",
  public = list(
    `template_id` = NULL,
    `template_type` = NULL,
    `template_os` = NULL,
    `template_version` = NULL,
    `template_bits` = NULL,
    `template_file` = NULL,
    `template_available` = NULL,
    `template_name` = NULL,
    `template_dir` = NULL,

    #' @description
    #' Initialize a new VpsTemplateRow class.
    #'
    #' @param template_id template_id
    #' @param template_type template_type
    #' @param template_os template_os
    #' @param template_version template_version
    #' @param template_bits template_bits
    #' @param template_file template_file
    #' @param template_available template_available
    #' @param template_name template_name
    #' @param template_dir template_dir
    #' @param ... Other optional arguments.
    initialize = function(`template_id` = NULL, `template_type` = NULL, `template_os` = NULL, `template_version` = NULL, `template_bits` = NULL, `template_file` = NULL, `template_available` = NULL, `template_name` = NULL, `template_dir` = NULL, ...) {
      if (!is.null(`template_id`)) {
        if (!(is.character(`template_id`) && length(`template_id`) == 1)) {
          stop(paste("Error! Invalid data for `template_id`. Must be a string:", `template_id`))
        }
        self$`template_id` <- `template_id`
      }
      if (!is.null(`template_type`)) {
        if (!(is.character(`template_type`) && length(`template_type`) == 1)) {
          stop(paste("Error! Invalid data for `template_type`. Must be a string:", `template_type`))
        }
        self$`template_type` <- `template_type`
      }
      if (!is.null(`template_os`)) {
        if (!(is.character(`template_os`) && length(`template_os`) == 1)) {
          stop(paste("Error! Invalid data for `template_os`. Must be a string:", `template_os`))
        }
        self$`template_os` <- `template_os`
      }
      if (!is.null(`template_version`)) {
        if (!(is.character(`template_version`) && length(`template_version`) == 1)) {
          stop(paste("Error! Invalid data for `template_version`. Must be a string:", `template_version`))
        }
        self$`template_version` <- `template_version`
      }
      if (!is.null(`template_bits`)) {
        if (!(is.character(`template_bits`) && length(`template_bits`) == 1)) {
          stop(paste("Error! Invalid data for `template_bits`. Must be a string:", `template_bits`))
        }
        self$`template_bits` <- `template_bits`
      }
      if (!is.null(`template_file`)) {
        if (!(is.character(`template_file`) && length(`template_file`) == 1)) {
          stop(paste("Error! Invalid data for `template_file`. Must be a string:", `template_file`))
        }
        self$`template_file` <- `template_file`
      }
      if (!is.null(`template_available`)) {
        if (!(is.character(`template_available`) && length(`template_available`) == 1)) {
          stop(paste("Error! Invalid data for `template_available`. Must be a string:", `template_available`))
        }
        self$`template_available` <- `template_available`
      }
      if (!is.null(`template_name`)) {
        if (!(is.character(`template_name`) && length(`template_name`) == 1)) {
          stop(paste("Error! Invalid data for `template_name`. Must be a string:", `template_name`))
        }
        self$`template_name` <- `template_name`
      }
      if (!is.null(`template_dir`)) {
        if (!(is.character(`template_dir`) && length(`template_dir`) == 1)) {
          stop(paste("Error! Invalid data for `template_dir`. Must be a string:", `template_dir`))
        }
        self$`template_dir` <- `template_dir`
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
    #' @return VpsTemplateRow as a base R list.
    #' @examples
    #' # convert array of VpsTemplateRow (x) to a data frame
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
    #' Convert VpsTemplateRow to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      VpsTemplateRowObject <- list()
      if (!is.null(self$`template_id`)) {
        VpsTemplateRowObject[["template_id"]] <-
          self$`template_id`
      }
      if (!is.null(self$`template_type`)) {
        VpsTemplateRowObject[["template_type"]] <-
          self$`template_type`
      }
      if (!is.null(self$`template_os`)) {
        VpsTemplateRowObject[["template_os"]] <-
          self$`template_os`
      }
      if (!is.null(self$`template_version`)) {
        VpsTemplateRowObject[["template_version"]] <-
          self$`template_version`
      }
      if (!is.null(self$`template_bits`)) {
        VpsTemplateRowObject[["template_bits"]] <-
          self$`template_bits`
      }
      if (!is.null(self$`template_file`)) {
        VpsTemplateRowObject[["template_file"]] <-
          self$`template_file`
      }
      if (!is.null(self$`template_available`)) {
        VpsTemplateRowObject[["template_available"]] <-
          self$`template_available`
      }
      if (!is.null(self$`template_name`)) {
        VpsTemplateRowObject[["template_name"]] <-
          self$`template_name`
      }
      if (!is.null(self$`template_dir`)) {
        VpsTemplateRowObject[["template_dir"]] <-
          self$`template_dir`
      }
      return(VpsTemplateRowObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsTemplateRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsTemplateRow
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`template_id`)) {
        self$`template_id` <- this_object$`template_id`
      }
      if (!is.null(this_object$`template_type`)) {
        self$`template_type` <- this_object$`template_type`
      }
      if (!is.null(this_object$`template_os`)) {
        self$`template_os` <- this_object$`template_os`
      }
      if (!is.null(this_object$`template_version`)) {
        self$`template_version` <- this_object$`template_version`
      }
      if (!is.null(this_object$`template_bits`)) {
        self$`template_bits` <- this_object$`template_bits`
      }
      if (!is.null(this_object$`template_file`)) {
        self$`template_file` <- this_object$`template_file`
      }
      if (!is.null(this_object$`template_available`)) {
        self$`template_available` <- this_object$`template_available`
      }
      if (!is.null(this_object$`template_name`)) {
        self$`template_name` <- this_object$`template_name`
      }
      if (!is.null(this_object$`template_dir`)) {
        self$`template_dir` <- this_object$`template_dir`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return VpsTemplateRow in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsTemplateRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsTemplateRow
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`template_id` <- this_object$`template_id`
      self$`template_type` <- this_object$`template_type`
      self$`template_os` <- this_object$`template_os`
      self$`template_version` <- this_object$`template_version`
      self$`template_bits` <- this_object$`template_bits`
      self$`template_file` <- this_object$`template_file`
      self$`template_available` <- this_object$`template_available`
      self$`template_name` <- this_object$`template_name`
      self$`template_dir` <- this_object$`template_dir`
      self
    },

    #' @description
    #' Validate JSON input with respect to VpsTemplateRow and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of VpsTemplateRow
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
# VpsTemplateRow$unlock()
#
## Below is an example to define the print function
# VpsTemplateRow$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# VpsTemplateRow$lock()

