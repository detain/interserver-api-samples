#' Create a new WebsitesOrderPackages
#'
#' @description
#' Schema for the packages field in WebsitesOrder
#'
#' @docType class
#' @title WebsitesOrderPackages
#' @description WebsitesOrderPackages Class
#' @format An \code{R6Class} generator object
#' @field 11447 Package description character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
WebsitesOrderPackages <- R6::R6Class(
  "WebsitesOrderPackages",
  public = list(
    `11447` = NULL,

    #' @description
    #' Initialize a new WebsitesOrderPackages class.
    #'
    #' @param 11447 Package description
    #' @param ... Other optional arguments.
    initialize = function(`11447`, ...) {
      if (!missing(`11447`)) {
        if (!(is.character(`11447`) && length(`11447`) == 1)) {
          stop(paste("Error! Invalid data for `11447`. Must be a string:", `11447`))
        }
        self$`11447` <- `11447`
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
    #' @return WebsitesOrderPackages as a base R list.
    #' @examples
    #' # convert array of WebsitesOrderPackages (x) to a data frame
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
    #' Convert WebsitesOrderPackages to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      WebsitesOrderPackagesObject <- list()
      if (!is.null(self$`11447`)) {
        WebsitesOrderPackagesObject[["11447"]] <-
          self$`11447`
      }
      return(WebsitesOrderPackagesObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of WebsitesOrderPackages
    #'
    #' @param input_json the JSON input
    #' @return the instance of WebsitesOrderPackages
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`11447`)) {
        self$`11447` <- this_object$`11447`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return WebsitesOrderPackages in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of WebsitesOrderPackages
    #'
    #' @param input_json the JSON input
    #' @return the instance of WebsitesOrderPackages
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`11447` <- this_object$`11447`
      self
    },

    #' @description
    #' Validate JSON input with respect to WebsitesOrderPackages and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `11447`
      if (!is.null(input_json$`11447`)) {
        if (!(is.character(input_json$`11447`) && length(input_json$`11447`) == 1)) {
          stop(paste("Error! Invalid data for `11447`. Must be a string:", input_json$`11447`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsitesOrderPackages: the required field `11447` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of WebsitesOrderPackages
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `11447` is null
      if (is.null(self$`11447`)) {
        return(FALSE)
      }

      TRUE
    },

    #' @description
    #' Return a list of invalid fields (if any).
    #'
    #' @return A list of invalid fields (if any).
    getInvalidFields = function() {
      invalid_fields <- list()
      # check if the required `11447` is null
      if (is.null(self$`11447`)) {
        invalid_fields["11447"] <- "Non-nullable required field `11447` cannot be null."
      }

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
# WebsitesOrderPackages$unlock()
#
## Below is an example to define the print function
# WebsitesOrderPackages$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# WebsitesOrderPackages$lock()

