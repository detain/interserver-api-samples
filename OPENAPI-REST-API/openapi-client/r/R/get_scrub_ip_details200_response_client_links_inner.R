#' Create a new GetScrubIpDetails200ResponseClientLinksInner
#'
#' @description
#' GetScrubIpDetails200ResponseClientLinksInner Class
#'
#' @docType class
#' @title GetScrubIpDetails200ResponseClientLinksInner
#' @description GetScrubIpDetails200ResponseClientLinksInner Class
#' @format An \code{R6Class} generator object
#' @field label  character [optional]
#' @field link  character [optional]
#' @field icon  character [optional]
#' @field icon_text  character [optional]
#' @field help_text  character [optional]
#' @field other_attr  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
GetScrubIpDetails200ResponseClientLinksInner <- R6::R6Class(
  "GetScrubIpDetails200ResponseClientLinksInner",
  public = list(
    `label` = NULL,
    `link` = NULL,
    `icon` = NULL,
    `icon_text` = NULL,
    `help_text` = NULL,
    `other_attr` = NULL,

    #' @description
    #' Initialize a new GetScrubIpDetails200ResponseClientLinksInner class.
    #'
    #' @param label label
    #' @param link link
    #' @param icon icon
    #' @param icon_text icon_text
    #' @param help_text help_text
    #' @param other_attr other_attr
    #' @param ... Other optional arguments.
    initialize = function(`label` = NULL, `link` = NULL, `icon` = NULL, `icon_text` = NULL, `help_text` = NULL, `other_attr` = NULL, ...) {
      if (!is.null(`label`)) {
        if (!(is.character(`label`) && length(`label`) == 1)) {
          stop(paste("Error! Invalid data for `label`. Must be a string:", `label`))
        }
        self$`label` <- `label`
      }
      if (!is.null(`link`)) {
        if (!(is.character(`link`) && length(`link`) == 1)) {
          stop(paste("Error! Invalid data for `link`. Must be a string:", `link`))
        }
        self$`link` <- `link`
      }
      if (!is.null(`icon`)) {
        if (!(is.character(`icon`) && length(`icon`) == 1)) {
          stop(paste("Error! Invalid data for `icon`. Must be a string:", `icon`))
        }
        self$`icon` <- `icon`
      }
      if (!is.null(`icon_text`)) {
        if (!(is.character(`icon_text`) && length(`icon_text`) == 1)) {
          stop(paste("Error! Invalid data for `icon_text`. Must be a string:", `icon_text`))
        }
        self$`icon_text` <- `icon_text`
      }
      if (!is.null(`help_text`)) {
        if (!(is.character(`help_text`) && length(`help_text`) == 1)) {
          stop(paste("Error! Invalid data for `help_text`. Must be a string:", `help_text`))
        }
        self$`help_text` <- `help_text`
      }
      if (!is.null(`other_attr`)) {
        if (!(is.character(`other_attr`) && length(`other_attr`) == 1)) {
          stop(paste("Error! Invalid data for `other_attr`. Must be a string:", `other_attr`))
        }
        self$`other_attr` <- `other_attr`
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
    #' @return GetScrubIpDetails200ResponseClientLinksInner as a base R list.
    #' @examples
    #' # convert array of GetScrubIpDetails200ResponseClientLinksInner (x) to a data frame
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
    #' Convert GetScrubIpDetails200ResponseClientLinksInner to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      GetScrubIpDetails200ResponseClientLinksInnerObject <- list()
      if (!is.null(self$`label`)) {
        GetScrubIpDetails200ResponseClientLinksInnerObject[["label"]] <-
          self$`label`
      }
      if (!is.null(self$`link`)) {
        GetScrubIpDetails200ResponseClientLinksInnerObject[["link"]] <-
          self$`link`
      }
      if (!is.null(self$`icon`)) {
        GetScrubIpDetails200ResponseClientLinksInnerObject[["icon"]] <-
          self$`icon`
      }
      if (!is.null(self$`icon_text`)) {
        GetScrubIpDetails200ResponseClientLinksInnerObject[["icon_text"]] <-
          self$`icon_text`
      }
      if (!is.null(self$`help_text`)) {
        GetScrubIpDetails200ResponseClientLinksInnerObject[["help_text"]] <-
          self$`help_text`
      }
      if (!is.null(self$`other_attr`)) {
        GetScrubIpDetails200ResponseClientLinksInnerObject[["other_attr"]] <-
          self$`other_attr`
      }
      return(GetScrubIpDetails200ResponseClientLinksInnerObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of GetScrubIpDetails200ResponseClientLinksInner
    #'
    #' @param input_json the JSON input
    #' @return the instance of GetScrubIpDetails200ResponseClientLinksInner
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`label`)) {
        self$`label` <- this_object$`label`
      }
      if (!is.null(this_object$`link`)) {
        self$`link` <- this_object$`link`
      }
      if (!is.null(this_object$`icon`)) {
        self$`icon` <- this_object$`icon`
      }
      if (!is.null(this_object$`icon_text`)) {
        self$`icon_text` <- this_object$`icon_text`
      }
      if (!is.null(this_object$`help_text`)) {
        self$`help_text` <- this_object$`help_text`
      }
      if (!is.null(this_object$`other_attr`)) {
        self$`other_attr` <- this_object$`other_attr`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return GetScrubIpDetails200ResponseClientLinksInner in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of GetScrubIpDetails200ResponseClientLinksInner
    #'
    #' @param input_json the JSON input
    #' @return the instance of GetScrubIpDetails200ResponseClientLinksInner
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`label` <- this_object$`label`
      self$`link` <- this_object$`link`
      self$`icon` <- this_object$`icon`
      self$`icon_text` <- this_object$`icon_text`
      self$`help_text` <- this_object$`help_text`
      self$`other_attr` <- this_object$`other_attr`
      self
    },

    #' @description
    #' Validate JSON input with respect to GetScrubIpDetails200ResponseClientLinksInner and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of GetScrubIpDetails200ResponseClientLinksInner
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
# GetScrubIpDetails200ResponseClientLinksInner$unlock()
#
## Below is an example to define the print function
# GetScrubIpDetails200ResponseClientLinksInner$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# GetScrubIpDetails200ResponseClientLinksInner$lock()

