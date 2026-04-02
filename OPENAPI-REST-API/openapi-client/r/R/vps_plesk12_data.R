#' Create a new VpsPlesk12Data
#'
#' @description
#' VpsPlesk12Data Class
#'
#' @docType class
#' @title VpsPlesk12Data
#' @description VpsPlesk12Data Class
#' @format An \code{R6Class} generator object
#' @field admin  \link{VpsPleskLicense} [optional]
#' @field pro  \link{VpsPleskLicense} [optional]
#' @field host  \link{VpsPleskLicense} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
VpsPlesk12Data <- R6::R6Class(
  "VpsPlesk12Data",
  public = list(
    `admin` = NULL,
    `pro` = NULL,
    `host` = NULL,

    #' @description
    #' Initialize a new VpsPlesk12Data class.
    #'
    #' @param admin admin
    #' @param pro pro
    #' @param host host
    #' @param ... Other optional arguments.
    initialize = function(`admin` = NULL, `pro` = NULL, `host` = NULL, ...) {
      if (!is.null(`admin`)) {
        stopifnot(R6::is.R6(`admin`))
        self$`admin` <- `admin`
      }
      if (!is.null(`pro`)) {
        stopifnot(R6::is.R6(`pro`))
        self$`pro` <- `pro`
      }
      if (!is.null(`host`)) {
        stopifnot(R6::is.R6(`host`))
        self$`host` <- `host`
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
    #' @return VpsPlesk12Data as a base R list.
    #' @examples
    #' # convert array of VpsPlesk12Data (x) to a data frame
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
    #' Convert VpsPlesk12Data to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      VpsPlesk12DataObject <- list()
      if (!is.null(self$`admin`)) {
        VpsPlesk12DataObject[["admin"]] <-
          self$extractSimpleType(self$`admin`)
      }
      if (!is.null(self$`pro`)) {
        VpsPlesk12DataObject[["pro"]] <-
          self$extractSimpleType(self$`pro`)
      }
      if (!is.null(self$`host`)) {
        VpsPlesk12DataObject[["host"]] <-
          self$extractSimpleType(self$`host`)
      }
      return(VpsPlesk12DataObject)
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
    #' Deserialize JSON string into an instance of VpsPlesk12Data
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsPlesk12Data
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`admin`)) {
        `admin_object` <- VpsPleskLicense$new()
        `admin_object`$fromJSON(jsonlite::toJSON(this_object$`admin`, auto_unbox = TRUE, digits = NA))
        self$`admin` <- `admin_object`
      }
      if (!is.null(this_object$`pro`)) {
        `pro_object` <- VpsPleskLicense$new()
        `pro_object`$fromJSON(jsonlite::toJSON(this_object$`pro`, auto_unbox = TRUE, digits = NA))
        self$`pro` <- `pro_object`
      }
      if (!is.null(this_object$`host`)) {
        `host_object` <- VpsPleskLicense$new()
        `host_object`$fromJSON(jsonlite::toJSON(this_object$`host`, auto_unbox = TRUE, digits = NA))
        self$`host` <- `host_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return VpsPlesk12Data in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsPlesk12Data
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsPlesk12Data
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`admin` <- VpsPleskLicense$new()$fromJSON(jsonlite::toJSON(this_object$`admin`, auto_unbox = TRUE, digits = NA))
      self$`pro` <- VpsPleskLicense$new()$fromJSON(jsonlite::toJSON(this_object$`pro`, auto_unbox = TRUE, digits = NA))
      self$`host` <- VpsPleskLicense$new()$fromJSON(jsonlite::toJSON(this_object$`host`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to VpsPlesk12Data and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of VpsPlesk12Data
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
# VpsPlesk12Data$unlock()
#
## Below is an example to define the print function
# VpsPlesk12Data$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# VpsPlesk12Data$lock()

