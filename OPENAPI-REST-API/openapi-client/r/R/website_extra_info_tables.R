#' Create a new WebsiteExtraInfoTables
#'
#' @description
#' Supplementary information tables displayed for a webhosting service (links, DNS, preview).
#'
#' @docType class
#' @title WebsiteExtraInfoTables
#' @description WebsiteExtraInfoTables Class
#' @format An \code{R6Class} generator object
#' @field links  \link{WebsiteTable} [optional]
#' @field preview  \link{WebsiteTable} [optional]
#' @field dns  \link{WebsiteTable} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
WebsiteExtraInfoTables <- R6::R6Class(
  "WebsiteExtraInfoTables",
  public = list(
    `links` = NULL,
    `preview` = NULL,
    `dns` = NULL,

    #' @description
    #' Initialize a new WebsiteExtraInfoTables class.
    #'
    #' @param links links
    #' @param preview preview
    #' @param dns dns
    #' @param ... Other optional arguments.
    initialize = function(`links` = NULL, `preview` = NULL, `dns` = NULL, ...) {
      if (!is.null(`links`)) {
        stopifnot(R6::is.R6(`links`))
        self$`links` <- `links`
      }
      if (!is.null(`preview`)) {
        stopifnot(R6::is.R6(`preview`))
        self$`preview` <- `preview`
      }
      if (!is.null(`dns`)) {
        stopifnot(R6::is.R6(`dns`))
        self$`dns` <- `dns`
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
    #' @return WebsiteExtraInfoTables as a base R list.
    #' @examples
    #' # convert array of WebsiteExtraInfoTables (x) to a data frame
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
    #' Convert WebsiteExtraInfoTables to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      WebsiteExtraInfoTablesObject <- list()
      if (!is.null(self$`links`)) {
        WebsiteExtraInfoTablesObject[["links"]] <-
          self$extractSimpleType(self$`links`)
      }
      if (!is.null(self$`preview`)) {
        WebsiteExtraInfoTablesObject[["preview"]] <-
          self$extractSimpleType(self$`preview`)
      }
      if (!is.null(self$`dns`)) {
        WebsiteExtraInfoTablesObject[["dns"]] <-
          self$extractSimpleType(self$`dns`)
      }
      return(WebsiteExtraInfoTablesObject)
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
    #' Deserialize JSON string into an instance of WebsiteExtraInfoTables
    #'
    #' @param input_json the JSON input
    #' @return the instance of WebsiteExtraInfoTables
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`links`)) {
        `links_object` <- WebsiteTable$new()
        `links_object`$fromJSON(jsonlite::toJSON(this_object$`links`, auto_unbox = TRUE, digits = NA))
        self$`links` <- `links_object`
      }
      if (!is.null(this_object$`preview`)) {
        `preview_object` <- WebsiteTable$new()
        `preview_object`$fromJSON(jsonlite::toJSON(this_object$`preview`, auto_unbox = TRUE, digits = NA))
        self$`preview` <- `preview_object`
      }
      if (!is.null(this_object$`dns`)) {
        `dns_object` <- WebsiteTable$new()
        `dns_object`$fromJSON(jsonlite::toJSON(this_object$`dns`, auto_unbox = TRUE, digits = NA))
        self$`dns` <- `dns_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return WebsiteExtraInfoTables in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of WebsiteExtraInfoTables
    #'
    #' @param input_json the JSON input
    #' @return the instance of WebsiteExtraInfoTables
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`links` <- WebsiteTable$new()$fromJSON(jsonlite::toJSON(this_object$`links`, auto_unbox = TRUE, digits = NA))
      self$`preview` <- WebsiteTable$new()$fromJSON(jsonlite::toJSON(this_object$`preview`, auto_unbox = TRUE, digits = NA))
      self$`dns` <- WebsiteTable$new()$fromJSON(jsonlite::toJSON(this_object$`dns`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to WebsiteExtraInfoTables and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of WebsiteExtraInfoTables
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
# WebsiteExtraInfoTables$unlock()
#
## Below is an example to define the print function
# WebsiteExtraInfoTables$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# WebsiteExtraInfoTables$lock()

