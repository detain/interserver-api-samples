#' Create a new HomeServicesWebhostingLinks
#'
#' @description
#' Map of webhosting service IDs to their hostnames for the account dashboard.
#'
#' @docType class
#' @title HomeServicesWebhostingLinks
#' @description HomeServicesWebhostingLinks Class
#' @format An \code{R6Class} generator object
#' @field 376359 Link to a website. character [optional]
#' @field 376473 Link to a website. character [optional]
#' @field 386218 Link to a website. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
HomeServicesWebhostingLinks <- R6::R6Class(
  "HomeServicesWebhostingLinks",
  public = list(
    `376359` = NULL,
    `376473` = NULL,
    `386218` = NULL,

    #' @description
    #' Initialize a new HomeServicesWebhostingLinks class.
    #'
    #' @param 376359 Link to a website.
    #' @param 376473 Link to a website.
    #' @param 386218 Link to a website.
    #' @param ... Other optional arguments.
    initialize = function(`376359` = NULL, `376473` = NULL, `386218` = NULL, ...) {
      if (!is.null(`376359`)) {
        if (!(is.character(`376359`) && length(`376359`) == 1)) {
          stop(paste("Error! Invalid data for `376359`. Must be a string:", `376359`))
        }
        self$`376359` <- `376359`
      }
      if (!is.null(`376473`)) {
        if (!(is.character(`376473`) && length(`376473`) == 1)) {
          stop(paste("Error! Invalid data for `376473`. Must be a string:", `376473`))
        }
        self$`376473` <- `376473`
      }
      if (!is.null(`386218`)) {
        if (!(is.character(`386218`) && length(`386218`) == 1)) {
          stop(paste("Error! Invalid data for `386218`. Must be a string:", `386218`))
        }
        self$`386218` <- `386218`
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
    #' @return HomeServicesWebhostingLinks as a base R list.
    #' @examples
    #' # convert array of HomeServicesWebhostingLinks (x) to a data frame
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
    #' Convert HomeServicesWebhostingLinks to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      HomeServicesWebhostingLinksObject <- list()
      if (!is.null(self$`376359`)) {
        HomeServicesWebhostingLinksObject[["376359"]] <-
          self$`376359`
      }
      if (!is.null(self$`376473`)) {
        HomeServicesWebhostingLinksObject[["376473"]] <-
          self$`376473`
      }
      if (!is.null(self$`386218`)) {
        HomeServicesWebhostingLinksObject[["386218"]] <-
          self$`386218`
      }
      return(HomeServicesWebhostingLinksObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of HomeServicesWebhostingLinks
    #'
    #' @param input_json the JSON input
    #' @return the instance of HomeServicesWebhostingLinks
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`376359`)) {
        self$`376359` <- this_object$`376359`
      }
      if (!is.null(this_object$`376473`)) {
        self$`376473` <- this_object$`376473`
      }
      if (!is.null(this_object$`386218`)) {
        self$`386218` <- this_object$`386218`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return HomeServicesWebhostingLinks in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of HomeServicesWebhostingLinks
    #'
    #' @param input_json the JSON input
    #' @return the instance of HomeServicesWebhostingLinks
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`376359` <- this_object$`376359`
      self$`376473` <- this_object$`376473`
      self$`386218` <- this_object$`386218`
      self
    },

    #' @description
    #' Validate JSON input with respect to HomeServicesWebhostingLinks and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of HomeServicesWebhostingLinks
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
# HomeServicesWebhostingLinks$unlock()
#
## Below is an example to define the print function
# HomeServicesWebhostingLinks$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# HomeServicesWebhostingLinks$lock()

