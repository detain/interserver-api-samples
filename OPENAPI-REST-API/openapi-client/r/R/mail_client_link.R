#' Create a new MailClientLink
#'
#' @description
#' A navigation link for mail service actions in the client portal.
#'
#' @docType class
#' @title MailClientLink
#' @description MailClientLink Class
#' @format An \code{R6Class} generator object
#' @field label The label of the client link. character [optional]
#' @field link The link URL of the client link. character [optional]
#' @field icon The icon class of the client link. character [optional]
#' @field icon_text The text for the icon of the client link. character [optional]
#' @field help_text Help text for the client link. character [optional]
#' @field other_attr Additional attributes for the client link. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
MailClientLink <- R6::R6Class(
  "MailClientLink",
  public = list(
    `label` = NULL,
    `link` = NULL,
    `icon` = NULL,
    `icon_text` = NULL,
    `help_text` = NULL,
    `other_attr` = NULL,

    #' @description
    #' Initialize a new MailClientLink class.
    #'
    #' @param label The label of the client link.
    #' @param link The link URL of the client link.
    #' @param icon The icon class of the client link.
    #' @param icon_text The text for the icon of the client link.
    #' @param help_text Help text for the client link.
    #' @param other_attr Additional attributes for the client link.
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
    #' @return MailClientLink as a base R list.
    #' @examples
    #' # convert array of MailClientLink (x) to a data frame
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
    #' Convert MailClientLink to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      MailClientLinkObject <- list()
      if (!is.null(self$`label`)) {
        MailClientLinkObject[["label"]] <-
          self$`label`
      }
      if (!is.null(self$`link`)) {
        MailClientLinkObject[["link"]] <-
          self$`link`
      }
      if (!is.null(self$`icon`)) {
        MailClientLinkObject[["icon"]] <-
          self$`icon`
      }
      if (!is.null(self$`icon_text`)) {
        MailClientLinkObject[["icon_text"]] <-
          self$`icon_text`
      }
      if (!is.null(self$`help_text`)) {
        MailClientLinkObject[["help_text"]] <-
          self$`help_text`
      }
      if (!is.null(self$`other_attr`)) {
        MailClientLinkObject[["other_attr"]] <-
          self$`other_attr`
      }
      return(MailClientLinkObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of MailClientLink
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailClientLink
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
    #' @return MailClientLink in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of MailClientLink
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailClientLink
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
    #' Validate JSON input with respect to MailClientLink and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of MailClientLink
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
# MailClientLink$unlock()
#
## Below is an example to define the print function
# MailClientLink$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# MailClientLink$lock()

