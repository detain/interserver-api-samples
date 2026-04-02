#' Create a new HomeDetailsModulesWebhosting
#'
#' @description
#' Dashboard module configuration for webhosting services.
#'
#' @docType class
#' @title HomeDetailsModulesWebhosting
#' @description HomeDetailsModulesWebhosting Class
#' @format An \code{R6Class} generator object
#' @field icon The icon for web hosting. character [optional]
#' @field view_link Link to view website. character [optional]
#' @field heading Heading for web hosting. character [optional]
#' @field buy_link Link to order website. character [optional]
#' @field list_link Link to view websites list. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
HomeDetailsModulesWebhosting <- R6::R6Class(
  "HomeDetailsModulesWebhosting",
  public = list(
    `icon` = NULL,
    `view_link` = NULL,
    `heading` = NULL,
    `buy_link` = NULL,
    `list_link` = NULL,

    #' @description
    #' Initialize a new HomeDetailsModulesWebhosting class.
    #'
    #' @param icon The icon for web hosting.
    #' @param view_link Link to view website.
    #' @param heading Heading for web hosting.
    #' @param buy_link Link to order website.
    #' @param list_link Link to view websites list.
    #' @param ... Other optional arguments.
    initialize = function(`icon` = NULL, `view_link` = NULL, `heading` = NULL, `buy_link` = NULL, `list_link` = NULL, ...) {
      if (!is.null(`icon`)) {
        if (!(is.character(`icon`) && length(`icon`) == 1)) {
          stop(paste("Error! Invalid data for `icon`. Must be a string:", `icon`))
        }
        self$`icon` <- `icon`
      }
      if (!is.null(`view_link`)) {
        if (!(is.character(`view_link`) && length(`view_link`) == 1)) {
          stop(paste("Error! Invalid data for `view_link`. Must be a string:", `view_link`))
        }
        self$`view_link` <- `view_link`
      }
      if (!is.null(`heading`)) {
        if (!(is.character(`heading`) && length(`heading`) == 1)) {
          stop(paste("Error! Invalid data for `heading`. Must be a string:", `heading`))
        }
        self$`heading` <- `heading`
      }
      if (!is.null(`buy_link`)) {
        if (!(is.character(`buy_link`) && length(`buy_link`) == 1)) {
          stop(paste("Error! Invalid data for `buy_link`. Must be a string:", `buy_link`))
        }
        self$`buy_link` <- `buy_link`
      }
      if (!is.null(`list_link`)) {
        if (!(is.character(`list_link`) && length(`list_link`) == 1)) {
          stop(paste("Error! Invalid data for `list_link`. Must be a string:", `list_link`))
        }
        self$`list_link` <- `list_link`
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
    #' @return HomeDetailsModulesWebhosting as a base R list.
    #' @examples
    #' # convert array of HomeDetailsModulesWebhosting (x) to a data frame
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
    #' Convert HomeDetailsModulesWebhosting to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      HomeDetailsModulesWebhostingObject <- list()
      if (!is.null(self$`icon`)) {
        HomeDetailsModulesWebhostingObject[["icon"]] <-
          self$`icon`
      }
      if (!is.null(self$`view_link`)) {
        HomeDetailsModulesWebhostingObject[["view_link"]] <-
          self$`view_link`
      }
      if (!is.null(self$`heading`)) {
        HomeDetailsModulesWebhostingObject[["heading"]] <-
          self$`heading`
      }
      if (!is.null(self$`buy_link`)) {
        HomeDetailsModulesWebhostingObject[["buy_link"]] <-
          self$`buy_link`
      }
      if (!is.null(self$`list_link`)) {
        HomeDetailsModulesWebhostingObject[["list_link"]] <-
          self$`list_link`
      }
      return(HomeDetailsModulesWebhostingObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of HomeDetailsModulesWebhosting
    #'
    #' @param input_json the JSON input
    #' @return the instance of HomeDetailsModulesWebhosting
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`icon`)) {
        self$`icon` <- this_object$`icon`
      }
      if (!is.null(this_object$`view_link`)) {
        self$`view_link` <- this_object$`view_link`
      }
      if (!is.null(this_object$`heading`)) {
        self$`heading` <- this_object$`heading`
      }
      if (!is.null(this_object$`buy_link`)) {
        self$`buy_link` <- this_object$`buy_link`
      }
      if (!is.null(this_object$`list_link`)) {
        self$`list_link` <- this_object$`list_link`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return HomeDetailsModulesWebhosting in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of HomeDetailsModulesWebhosting
    #'
    #' @param input_json the JSON input
    #' @return the instance of HomeDetailsModulesWebhosting
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`icon` <- this_object$`icon`
      self$`view_link` <- this_object$`view_link`
      self$`heading` <- this_object$`heading`
      self$`buy_link` <- this_object$`buy_link`
      self$`list_link` <- this_object$`list_link`
      self
    },

    #' @description
    #' Validate JSON input with respect to HomeDetailsModulesWebhosting and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of HomeDetailsModulesWebhosting
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
# HomeDetailsModulesWebhosting$unlock()
#
## Below is an example to define the print function
# HomeDetailsModulesWebhosting$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# HomeDetailsModulesWebhosting$lock()

