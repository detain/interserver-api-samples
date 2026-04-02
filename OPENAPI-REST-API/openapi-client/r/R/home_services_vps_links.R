#' Create a new HomeServicesVpsLinks
#'
#' @description
#' Map of VPS service IDs to their hostnames for the account dashboard.
#'
#' @docType class
#' @title HomeServicesVpsLinks
#' @description HomeServicesVpsLinks Class
#' @format An \code{R6Class} generator object
#' @field 465503 Link to a VPS. character [optional]
#' @field 2500081 Link to a VPS. character [optional]
#' @field 2578866 Link to a VPS. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
HomeServicesVpsLinks <- R6::R6Class(
  "HomeServicesVpsLinks",
  public = list(
    `465503` = NULL,
    `2500081` = NULL,
    `2578866` = NULL,

    #' @description
    #' Initialize a new HomeServicesVpsLinks class.
    #'
    #' @param 465503 Link to a VPS.
    #' @param 2500081 Link to a VPS.
    #' @param 2578866 Link to a VPS.
    #' @param ... Other optional arguments.
    initialize = function(`465503` = NULL, `2500081` = NULL, `2578866` = NULL, ...) {
      if (!is.null(`465503`)) {
        if (!(is.character(`465503`) && length(`465503`) == 1)) {
          stop(paste("Error! Invalid data for `465503`. Must be a string:", `465503`))
        }
        self$`465503` <- `465503`
      }
      if (!is.null(`2500081`)) {
        if (!(is.character(`2500081`) && length(`2500081`) == 1)) {
          stop(paste("Error! Invalid data for `2500081`. Must be a string:", `2500081`))
        }
        self$`2500081` <- `2500081`
      }
      if (!is.null(`2578866`)) {
        if (!(is.character(`2578866`) && length(`2578866`) == 1)) {
          stop(paste("Error! Invalid data for `2578866`. Must be a string:", `2578866`))
        }
        self$`2578866` <- `2578866`
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
    #' @return HomeServicesVpsLinks as a base R list.
    #' @examples
    #' # convert array of HomeServicesVpsLinks (x) to a data frame
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
    #' Convert HomeServicesVpsLinks to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      HomeServicesVpsLinksObject <- list()
      if (!is.null(self$`465503`)) {
        HomeServicesVpsLinksObject[["465503"]] <-
          self$`465503`
      }
      if (!is.null(self$`2500081`)) {
        HomeServicesVpsLinksObject[["2500081"]] <-
          self$`2500081`
      }
      if (!is.null(self$`2578866`)) {
        HomeServicesVpsLinksObject[["2578866"]] <-
          self$`2578866`
      }
      return(HomeServicesVpsLinksObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of HomeServicesVpsLinks
    #'
    #' @param input_json the JSON input
    #' @return the instance of HomeServicesVpsLinks
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`465503`)) {
        self$`465503` <- this_object$`465503`
      }
      if (!is.null(this_object$`2500081`)) {
        self$`2500081` <- this_object$`2500081`
      }
      if (!is.null(this_object$`2578866`)) {
        self$`2578866` <- this_object$`2578866`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return HomeServicesVpsLinks in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of HomeServicesVpsLinks
    #'
    #' @param input_json the JSON input
    #' @return the instance of HomeServicesVpsLinks
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`465503` <- this_object$`465503`
      self$`2500081` <- this_object$`2500081`
      self$`2578866` <- this_object$`2578866`
      self
    },

    #' @description
    #' Validate JSON input with respect to HomeServicesVpsLinks and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of HomeServicesVpsLinks
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
# HomeServicesVpsLinks$unlock()
#
## Below is an example to define the print function
# HomeServicesVpsLinks$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# HomeServicesVpsLinks$lock()

