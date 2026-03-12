#' Create a new HomeServicesWebhosting
#'
#' @description
#' HomeServicesWebhosting Class
#'
#' @docType class
#' @title HomeServicesWebhosting
#' @description HomeServicesWebhosting Class
#' @format An \code{R6Class} generator object
#' @field links  \link{HomeServicesWebhostingLinks} [optional]
#' @field count Number of web hosting services. integer [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
HomeServicesWebhosting <- R6::R6Class(
  "HomeServicesWebhosting",
  public = list(
    `links` = NULL,
    `count` = NULL,

    #' @description
    #' Initialize a new HomeServicesWebhosting class.
    #'
    #' @param links links
    #' @param count Number of web hosting services.
    #' @param ... Other optional arguments.
    initialize = function(`links` = NULL, `count` = NULL, ...) {
      if (!is.null(`links`)) {
        stopifnot(R6::is.R6(`links`))
        self$`links` <- `links`
      }
      if (!is.null(`count`)) {
        if (!(is.numeric(`count`) && length(`count`) == 1)) {
          stop(paste("Error! Invalid data for `count`. Must be an integer:", `count`))
        }
        self$`count` <- `count`
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
    #' @return HomeServicesWebhosting as a base R list.
    #' @examples
    #' # convert array of HomeServicesWebhosting (x) to a data frame
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
    #' Convert HomeServicesWebhosting to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      HomeServicesWebhostingObject <- list()
      if (!is.null(self$`links`)) {
        HomeServicesWebhostingObject[["links"]] <-
          self$extractSimpleType(self$`links`)
      }
      if (!is.null(self$`count`)) {
        HomeServicesWebhostingObject[["count"]] <-
          self$`count`
      }
      return(HomeServicesWebhostingObject)
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
    #' Deserialize JSON string into an instance of HomeServicesWebhosting
    #'
    #' @param input_json the JSON input
    #' @return the instance of HomeServicesWebhosting
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`links`)) {
        `links_object` <- HomeServicesWebhostingLinks$new()
        `links_object`$fromJSON(jsonlite::toJSON(this_object$`links`, auto_unbox = TRUE, digits = NA))
        self$`links` <- `links_object`
      }
      if (!is.null(this_object$`count`)) {
        self$`count` <- this_object$`count`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return HomeServicesWebhosting in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of HomeServicesWebhosting
    #'
    #' @param input_json the JSON input
    #' @return the instance of HomeServicesWebhosting
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`links` <- HomeServicesWebhostingLinks$new()$fromJSON(jsonlite::toJSON(this_object$`links`, auto_unbox = TRUE, digits = NA))
      self$`count` <- this_object$`count`
      self
    },

    #' @description
    #' Validate JSON input with respect to HomeServicesWebhosting and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of HomeServicesWebhosting
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
# HomeServicesWebhosting$unlock()
#
## Below is an example to define the print function
# HomeServicesWebhosting$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# HomeServicesWebhosting$lock()

