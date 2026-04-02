#' Create a new HomeServicesServersLinks
#'
#' @description
#' Map of dedicated server service IDs to their hostnames for the account dashboard.
#'
#' @docType class
#' @title HomeServicesServersLinks
#' @description HomeServicesServersLinks Class
#' @format An \code{R6Class} generator object
#' @field 16058 Link to a server. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
HomeServicesServersLinks <- R6::R6Class(
  "HomeServicesServersLinks",
  public = list(
    `16058` = NULL,

    #' @description
    #' Initialize a new HomeServicesServersLinks class.
    #'
    #' @param 16058 Link to a server.
    #' @param ... Other optional arguments.
    initialize = function(`16058` = NULL, ...) {
      if (!is.null(`16058`)) {
        if (!(is.character(`16058`) && length(`16058`) == 1)) {
          stop(paste("Error! Invalid data for `16058`. Must be a string:", `16058`))
        }
        self$`16058` <- `16058`
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
    #' @return HomeServicesServersLinks as a base R list.
    #' @examples
    #' # convert array of HomeServicesServersLinks (x) to a data frame
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
    #' Convert HomeServicesServersLinks to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      HomeServicesServersLinksObject <- list()
      if (!is.null(self$`16058`)) {
        HomeServicesServersLinksObject[["16058"]] <-
          self$`16058`
      }
      return(HomeServicesServersLinksObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of HomeServicesServersLinks
    #'
    #' @param input_json the JSON input
    #' @return the instance of HomeServicesServersLinks
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`16058`)) {
        self$`16058` <- this_object$`16058`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return HomeServicesServersLinks in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of HomeServicesServersLinks
    #'
    #' @param input_json the JSON input
    #' @return the instance of HomeServicesServersLinks
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`16058` <- this_object$`16058`
      self
    },

    #' @description
    #' Validate JSON input with respect to HomeServicesServersLinks and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of HomeServicesServersLinks
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
# HomeServicesServersLinks$unlock()
#
## Below is an example to define the print function
# HomeServicesServersLinks$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# HomeServicesServersLinks$lock()

