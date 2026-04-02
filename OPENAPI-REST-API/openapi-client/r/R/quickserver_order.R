#' Create a new QuickserverOrder
#'
#' @description
#' Available QuickServer options and OS templates for ordering a new QuickServer.
#'
#' @docType class
#' @title QuickserverOrder
#' @description QuickserverOrder Class
#' @format An \code{R6Class} generator object
#' @field qs_id Quickserver ID. character [optional]
#' @field server_details  \link{QuickserverOrderServerDetails} [optional]
#' @field templates  \link{QuickserverOrderTemplates} [optional]
#' @field version  \link{QuickserverOrderVersion} [optional]
#' @field distro_sel  \link{QuickserverOrderDistroSel} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
QuickserverOrder <- R6::R6Class(
  "QuickserverOrder",
  public = list(
    `qs_id` = NULL,
    `server_details` = NULL,
    `templates` = NULL,
    `version` = NULL,
    `distro_sel` = NULL,

    #' @description
    #' Initialize a new QuickserverOrder class.
    #'
    #' @param qs_id Quickserver ID.
    #' @param server_details server_details
    #' @param templates templates
    #' @param version version
    #' @param distro_sel distro_sel
    #' @param ... Other optional arguments.
    initialize = function(`qs_id` = NULL, `server_details` = NULL, `templates` = NULL, `version` = NULL, `distro_sel` = NULL, ...) {
      if (!is.null(`qs_id`)) {
        if (!(is.character(`qs_id`) && length(`qs_id`) == 1)) {
          stop(paste("Error! Invalid data for `qs_id`. Must be a string:", `qs_id`))
        }
        self$`qs_id` <- `qs_id`
      }
      if (!is.null(`server_details`)) {
        stopifnot(R6::is.R6(`server_details`))
        self$`server_details` <- `server_details`
      }
      if (!is.null(`templates`)) {
        stopifnot(R6::is.R6(`templates`))
        self$`templates` <- `templates`
      }
      if (!is.null(`version`)) {
        stopifnot(R6::is.R6(`version`))
        self$`version` <- `version`
      }
      if (!is.null(`distro_sel`)) {
        stopifnot(R6::is.R6(`distro_sel`))
        self$`distro_sel` <- `distro_sel`
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
    #' @return QuickserverOrder as a base R list.
    #' @examples
    #' # convert array of QuickserverOrder (x) to a data frame
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
    #' Convert QuickserverOrder to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      QuickserverOrderObject <- list()
      if (!is.null(self$`qs_id`)) {
        QuickserverOrderObject[["qs_id"]] <-
          self$`qs_id`
      }
      if (!is.null(self$`server_details`)) {
        QuickserverOrderObject[["server_details"]] <-
          self$extractSimpleType(self$`server_details`)
      }
      if (!is.null(self$`templates`)) {
        QuickserverOrderObject[["templates"]] <-
          self$extractSimpleType(self$`templates`)
      }
      if (!is.null(self$`version`)) {
        QuickserverOrderObject[["version"]] <-
          self$extractSimpleType(self$`version`)
      }
      if (!is.null(self$`distro_sel`)) {
        QuickserverOrderObject[["distro_sel"]] <-
          self$extractSimpleType(self$`distro_sel`)
      }
      return(QuickserverOrderObject)
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
    #' Deserialize JSON string into an instance of QuickserverOrder
    #'
    #' @param input_json the JSON input
    #' @return the instance of QuickserverOrder
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`qs_id`)) {
        self$`qs_id` <- this_object$`qs_id`
      }
      if (!is.null(this_object$`server_details`)) {
        `server_details_object` <- QuickserverOrderServerDetails$new()
        `server_details_object`$fromJSON(jsonlite::toJSON(this_object$`server_details`, auto_unbox = TRUE, digits = NA))
        self$`server_details` <- `server_details_object`
      }
      if (!is.null(this_object$`templates`)) {
        `templates_object` <- QuickserverOrderTemplates$new()
        `templates_object`$fromJSON(jsonlite::toJSON(this_object$`templates`, auto_unbox = TRUE, digits = NA))
        self$`templates` <- `templates_object`
      }
      if (!is.null(this_object$`version`)) {
        `version_object` <- QuickserverOrderVersion$new()
        `version_object`$fromJSON(jsonlite::toJSON(this_object$`version`, auto_unbox = TRUE, digits = NA))
        self$`version` <- `version_object`
      }
      if (!is.null(this_object$`distro_sel`)) {
        `distro_sel_object` <- QuickserverOrderDistroSel$new()
        `distro_sel_object`$fromJSON(jsonlite::toJSON(this_object$`distro_sel`, auto_unbox = TRUE, digits = NA))
        self$`distro_sel` <- `distro_sel_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return QuickserverOrder in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of QuickserverOrder
    #'
    #' @param input_json the JSON input
    #' @return the instance of QuickserverOrder
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`qs_id` <- this_object$`qs_id`
      self$`server_details` <- QuickserverOrderServerDetails$new()$fromJSON(jsonlite::toJSON(this_object$`server_details`, auto_unbox = TRUE, digits = NA))
      self$`templates` <- QuickserverOrderTemplates$new()$fromJSON(jsonlite::toJSON(this_object$`templates`, auto_unbox = TRUE, digits = NA))
      self$`version` <- QuickserverOrderVersion$new()$fromJSON(jsonlite::toJSON(this_object$`version`, auto_unbox = TRUE, digits = NA))
      self$`distro_sel` <- QuickserverOrderDistroSel$new()$fromJSON(jsonlite::toJSON(this_object$`distro_sel`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to QuickserverOrder and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of QuickserverOrder
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
# QuickserverOrder$unlock()
#
## Below is an example to define the print function
# QuickserverOrder$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# QuickserverOrder$lock()

