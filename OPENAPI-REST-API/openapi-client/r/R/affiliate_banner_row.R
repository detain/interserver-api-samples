#' Create a new AffiliateBannerRow
#'
#' @description
#' An affiliate banner image details.
#'
#' @docType class
#' @title AffiliateBannerRow
#' @description AffiliateBannerRow Class
#' @format An \code{R6Class} generator object
#' @field image  character [optional]
#' @field width  character [optional]
#' @field height  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
AffiliateBannerRow <- R6::R6Class(
  "AffiliateBannerRow",
  public = list(
    `image` = NULL,
    `width` = NULL,
    `height` = NULL,

    #' @description
    #' Initialize a new AffiliateBannerRow class.
    #'
    #' @param image image
    #' @param width width
    #' @param height height
    #' @param ... Other optional arguments.
    initialize = function(`image` = NULL, `width` = NULL, `height` = NULL, ...) {
      if (!is.null(`image`)) {
        if (!(is.character(`image`) && length(`image`) == 1)) {
          stop(paste("Error! Invalid data for `image`. Must be a string:", `image`))
        }
        self$`image` <- `image`
      }
      if (!is.null(`width`)) {
        if (!(is.character(`width`) && length(`width`) == 1)) {
          stop(paste("Error! Invalid data for `width`. Must be a string:", `width`))
        }
        self$`width` <- `width`
      }
      if (!is.null(`height`)) {
        if (!(is.character(`height`) && length(`height`) == 1)) {
          stop(paste("Error! Invalid data for `height`. Must be a string:", `height`))
        }
        self$`height` <- `height`
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
    #' @return AffiliateBannerRow as a base R list.
    #' @examples
    #' # convert array of AffiliateBannerRow (x) to a data frame
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
    #' Convert AffiliateBannerRow to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      AffiliateBannerRowObject <- list()
      if (!is.null(self$`image`)) {
        AffiliateBannerRowObject[["image"]] <-
          self$`image`
      }
      if (!is.null(self$`width`)) {
        AffiliateBannerRowObject[["width"]] <-
          self$`width`
      }
      if (!is.null(self$`height`)) {
        AffiliateBannerRowObject[["height"]] <-
          self$`height`
      }
      return(AffiliateBannerRowObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of AffiliateBannerRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of AffiliateBannerRow
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`image`)) {
        self$`image` <- this_object$`image`
      }
      if (!is.null(this_object$`width`)) {
        self$`width` <- this_object$`width`
      }
      if (!is.null(this_object$`height`)) {
        self$`height` <- this_object$`height`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return AffiliateBannerRow in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of AffiliateBannerRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of AffiliateBannerRow
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`image` <- this_object$`image`
      self$`width` <- this_object$`width`
      self$`height` <- this_object$`height`
      self
    },

    #' @description
    #' Validate JSON input with respect to AffiliateBannerRow and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of AffiliateBannerRow
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
# AffiliateBannerRow$unlock()
#
## Below is an example to define the print function
# AffiliateBannerRow$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# AffiliateBannerRow$lock()

