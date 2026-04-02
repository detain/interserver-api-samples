#' Create a new HomeServicesDomainsLinks
#'
#' @description
#' Map of domain service IDs to their hostnames for the account dashboard.
#'
#' @docType class
#' @title HomeServicesDomainsLinks
#' @description HomeServicesDomainsLinks Class
#' @format An \code{R6Class} generator object
#' @field 376114 Link to a domain. character [optional]
#' @field 376503 Link to a domain. character [optional]
#' @field 592337 Link to a domain. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
HomeServicesDomainsLinks <- R6::R6Class(
  "HomeServicesDomainsLinks",
  public = list(
    `376114` = NULL,
    `376503` = NULL,
    `592337` = NULL,

    #' @description
    #' Initialize a new HomeServicesDomainsLinks class.
    #'
    #' @param 376114 Link to a domain.
    #' @param 376503 Link to a domain.
    #' @param 592337 Link to a domain.
    #' @param ... Other optional arguments.
    initialize = function(`376114` = NULL, `376503` = NULL, `592337` = NULL, ...) {
      if (!is.null(`376114`)) {
        if (!(is.character(`376114`) && length(`376114`) == 1)) {
          stop(paste("Error! Invalid data for `376114`. Must be a string:", `376114`))
        }
        self$`376114` <- `376114`
      }
      if (!is.null(`376503`)) {
        if (!(is.character(`376503`) && length(`376503`) == 1)) {
          stop(paste("Error! Invalid data for `376503`. Must be a string:", `376503`))
        }
        self$`376503` <- `376503`
      }
      if (!is.null(`592337`)) {
        if (!(is.character(`592337`) && length(`592337`) == 1)) {
          stop(paste("Error! Invalid data for `592337`. Must be a string:", `592337`))
        }
        self$`592337` <- `592337`
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
    #' @return HomeServicesDomainsLinks as a base R list.
    #' @examples
    #' # convert array of HomeServicesDomainsLinks (x) to a data frame
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
    #' Convert HomeServicesDomainsLinks to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      HomeServicesDomainsLinksObject <- list()
      if (!is.null(self$`376114`)) {
        HomeServicesDomainsLinksObject[["376114"]] <-
          self$`376114`
      }
      if (!is.null(self$`376503`)) {
        HomeServicesDomainsLinksObject[["376503"]] <-
          self$`376503`
      }
      if (!is.null(self$`592337`)) {
        HomeServicesDomainsLinksObject[["592337"]] <-
          self$`592337`
      }
      return(HomeServicesDomainsLinksObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of HomeServicesDomainsLinks
    #'
    #' @param input_json the JSON input
    #' @return the instance of HomeServicesDomainsLinks
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`376114`)) {
        self$`376114` <- this_object$`376114`
      }
      if (!is.null(this_object$`376503`)) {
        self$`376503` <- this_object$`376503`
      }
      if (!is.null(this_object$`592337`)) {
        self$`592337` <- this_object$`592337`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return HomeServicesDomainsLinks in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of HomeServicesDomainsLinks
    #'
    #' @param input_json the JSON input
    #' @return the instance of HomeServicesDomainsLinks
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`376114` <- this_object$`376114`
      self$`376503` <- this_object$`376503`
      self$`592337` <- this_object$`592337`
      self
    },

    #' @description
    #' Validate JSON input with respect to HomeServicesDomainsLinks and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of HomeServicesDomainsLinks
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
# HomeServicesDomainsLinks$unlock()
#
## Below is an example to define the print function
# HomeServicesDomainsLinks$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# HomeServicesDomainsLinks$lock()

