#' Create a new DomainClientLink
#'
#' @description
#' Links and labels for domain-related UI actions.
#'
#' @docType class
#' @title DomainClientLink
#' @description DomainClientLink Class
#' @format An \code{R6Class} generator object
#' @field label  character [optional]
#' @field link  character [optional]
#' @field icon  character [optional]
#' @field icon_text  character [optional]
#' @field help_text  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
DomainClientLink <- R6::R6Class(
  "DomainClientLink",
  public = list(
    `label` = NULL,
    `link` = NULL,
    `icon` = NULL,
    `icon_text` = NULL,
    `help_text` = NULL,

    #' @description
    #' Initialize a new DomainClientLink class.
    #'
    #' @param label label
    #' @param link link
    #' @param icon icon
    #' @param icon_text icon_text
    #' @param help_text help_text
    #' @param ... Other optional arguments.
    initialize = function(`label` = NULL, `link` = NULL, `icon` = NULL, `icon_text` = NULL, `help_text` = NULL, ...) {
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
    #' @return DomainClientLink as a base R list.
    #' @examples
    #' # convert array of DomainClientLink (x) to a data frame
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
    #' Convert DomainClientLink to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      DomainClientLinkObject <- list()
      if (!is.null(self$`label`)) {
        DomainClientLinkObject[["label"]] <-
          self$`label`
      }
      if (!is.null(self$`link`)) {
        DomainClientLinkObject[["link"]] <-
          self$`link`
      }
      if (!is.null(self$`icon`)) {
        DomainClientLinkObject[["icon"]] <-
          self$`icon`
      }
      if (!is.null(self$`icon_text`)) {
        DomainClientLinkObject[["icon_text"]] <-
          self$`icon_text`
      }
      if (!is.null(self$`help_text`)) {
        DomainClientLinkObject[["help_text"]] <-
          self$`help_text`
      }
      return(DomainClientLinkObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainClientLink
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainClientLink
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
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return DomainClientLink in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainClientLink
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainClientLink
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`label` <- this_object$`label`
      self$`link` <- this_object$`link`
      self$`icon` <- this_object$`icon`
      self$`icon_text` <- this_object$`icon_text`
      self$`help_text` <- this_object$`help_text`
      self
    },

    #' @description
    #' Validate JSON input with respect to DomainClientLink and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of DomainClientLink
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
# DomainClientLink$unlock()
#
## Below is an example to define the print function
# DomainClientLink$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# DomainClientLink$lock()

