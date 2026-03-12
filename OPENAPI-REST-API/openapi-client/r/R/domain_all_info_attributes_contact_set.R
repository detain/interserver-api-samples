#' Create a new DomainAllInfoAttributesContactSet
#'
#' @description
#' DomainAllInfoAttributesContactSet Class
#'
#' @docType class
#' @title DomainAllInfoAttributesContactSet
#' @description DomainAllInfoAttributesContactSet Class
#' @format An \code{R6Class} generator object
#' @field owner  \link{DomainOwnerContact} [optional]
#' @field admin  \link{DomainAdminContact} [optional]
#' @field tech  \link{DomainTechContact} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
DomainAllInfoAttributesContactSet <- R6::R6Class(
  "DomainAllInfoAttributesContactSet",
  public = list(
    `owner` = NULL,
    `admin` = NULL,
    `tech` = NULL,

    #' @description
    #' Initialize a new DomainAllInfoAttributesContactSet class.
    #'
    #' @param owner owner
    #' @param admin admin
    #' @param tech tech
    #' @param ... Other optional arguments.
    initialize = function(`owner` = NULL, `admin` = NULL, `tech` = NULL, ...) {
      if (!is.null(`owner`)) {
        stopifnot(R6::is.R6(`owner`))
        self$`owner` <- `owner`
      }
      if (!is.null(`admin`)) {
        stopifnot(R6::is.R6(`admin`))
        self$`admin` <- `admin`
      }
      if (!is.null(`tech`)) {
        stopifnot(R6::is.R6(`tech`))
        self$`tech` <- `tech`
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
    #' @return DomainAllInfoAttributesContactSet as a base R list.
    #' @examples
    #' # convert array of DomainAllInfoAttributesContactSet (x) to a data frame
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
    #' Convert DomainAllInfoAttributesContactSet to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      DomainAllInfoAttributesContactSetObject <- list()
      if (!is.null(self$`owner`)) {
        DomainAllInfoAttributesContactSetObject[["owner"]] <-
          self$extractSimpleType(self$`owner`)
      }
      if (!is.null(self$`admin`)) {
        DomainAllInfoAttributesContactSetObject[["admin"]] <-
          self$extractSimpleType(self$`admin`)
      }
      if (!is.null(self$`tech`)) {
        DomainAllInfoAttributesContactSetObject[["tech"]] <-
          self$extractSimpleType(self$`tech`)
      }
      return(DomainAllInfoAttributesContactSetObject)
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
    #' Deserialize JSON string into an instance of DomainAllInfoAttributesContactSet
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainAllInfoAttributesContactSet
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`owner`)) {
        `owner_object` <- DomainOwnerContact$new()
        `owner_object`$fromJSON(jsonlite::toJSON(this_object$`owner`, auto_unbox = TRUE, digits = NA))
        self$`owner` <- `owner_object`
      }
      if (!is.null(this_object$`admin`)) {
        `admin_object` <- DomainAdminContact$new()
        `admin_object`$fromJSON(jsonlite::toJSON(this_object$`admin`, auto_unbox = TRUE, digits = NA))
        self$`admin` <- `admin_object`
      }
      if (!is.null(this_object$`tech`)) {
        `tech_object` <- DomainTechContact$new()
        `tech_object`$fromJSON(jsonlite::toJSON(this_object$`tech`, auto_unbox = TRUE, digits = NA))
        self$`tech` <- `tech_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return DomainAllInfoAttributesContactSet in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainAllInfoAttributesContactSet
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainAllInfoAttributesContactSet
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`owner` <- DomainOwnerContact$new()$fromJSON(jsonlite::toJSON(this_object$`owner`, auto_unbox = TRUE, digits = NA))
      self$`admin` <- DomainAdminContact$new()$fromJSON(jsonlite::toJSON(this_object$`admin`, auto_unbox = TRUE, digits = NA))
      self$`tech` <- DomainTechContact$new()$fromJSON(jsonlite::toJSON(this_object$`tech`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to DomainAllInfoAttributesContactSet and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of DomainAllInfoAttributesContactSet
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
# DomainAllInfoAttributesContactSet$unlock()
#
## Below is an example to define the print function
# DomainAllInfoAttributesContactSet$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# DomainAllInfoAttributesContactSet$lock()

