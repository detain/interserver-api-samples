#' Create a new GetScrubIpDetails200ResponseFilterFirewallFiltersInner
#'
#' @description
#' GetScrubIpDetails200ResponseFilterFirewallFiltersInner Class
#'
#' @docType class
#' @title GetScrubIpDetails200ResponseFilterFirewallFiltersInner
#' @description GetScrubIpDetails200ResponseFilterFirewallFiltersInner Class
#' @format An \code{R6Class} generator object
#' @field daddr  character [optional]
#' @field dest  character [optional]
#' @field filter_name  character [optional]
#' @field destination_ip  character [optional]
#' @field filter  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
GetScrubIpDetails200ResponseFilterFirewallFiltersInner <- R6::R6Class(
  "GetScrubIpDetails200ResponseFilterFirewallFiltersInner",
  public = list(
    `daddr` = NULL,
    `dest` = NULL,
    `filter_name` = NULL,
    `destination_ip` = NULL,
    `filter` = NULL,

    #' @description
    #' Initialize a new GetScrubIpDetails200ResponseFilterFirewallFiltersInner class.
    #'
    #' @param daddr daddr
    #' @param dest dest
    #' @param filter_name filter_name
    #' @param destination_ip destination_ip
    #' @param filter filter
    #' @param ... Other optional arguments.
    initialize = function(`daddr` = NULL, `dest` = NULL, `filter_name` = NULL, `destination_ip` = NULL, `filter` = NULL, ...) {
      if (!is.null(`daddr`)) {
        if (!(is.character(`daddr`) && length(`daddr`) == 1)) {
          stop(paste("Error! Invalid data for `daddr`. Must be a string:", `daddr`))
        }
        self$`daddr` <- `daddr`
      }
      if (!is.null(`dest`)) {
        if (!(is.character(`dest`) && length(`dest`) == 1)) {
          stop(paste("Error! Invalid data for `dest`. Must be a string:", `dest`))
        }
        self$`dest` <- `dest`
      }
      if (!is.null(`filter_name`)) {
        if (!(is.character(`filter_name`) && length(`filter_name`) == 1)) {
          stop(paste("Error! Invalid data for `filter_name`. Must be a string:", `filter_name`))
        }
        self$`filter_name` <- `filter_name`
      }
      if (!is.null(`destination_ip`)) {
        if (!(is.character(`destination_ip`) && length(`destination_ip`) == 1)) {
          stop(paste("Error! Invalid data for `destination_ip`. Must be a string:", `destination_ip`))
        }
        self$`destination_ip` <- `destination_ip`
      }
      if (!is.null(`filter`)) {
        if (!(is.character(`filter`) && length(`filter`) == 1)) {
          stop(paste("Error! Invalid data for `filter`. Must be a string:", `filter`))
        }
        self$`filter` <- `filter`
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
    #' @return GetScrubIpDetails200ResponseFilterFirewallFiltersInner as a base R list.
    #' @examples
    #' # convert array of GetScrubIpDetails200ResponseFilterFirewallFiltersInner (x) to a data frame
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
    #' Convert GetScrubIpDetails200ResponseFilterFirewallFiltersInner to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      GetScrubIpDetails200ResponseFilterFirewallFiltersInnerObject <- list()
      if (!is.null(self$`daddr`)) {
        GetScrubIpDetails200ResponseFilterFirewallFiltersInnerObject[["daddr"]] <-
          self$`daddr`
      }
      if (!is.null(self$`dest`)) {
        GetScrubIpDetails200ResponseFilterFirewallFiltersInnerObject[["dest"]] <-
          self$`dest`
      }
      if (!is.null(self$`filter_name`)) {
        GetScrubIpDetails200ResponseFilterFirewallFiltersInnerObject[["filter_name"]] <-
          self$`filter_name`
      }
      if (!is.null(self$`destination_ip`)) {
        GetScrubIpDetails200ResponseFilterFirewallFiltersInnerObject[["destination_ip"]] <-
          self$`destination_ip`
      }
      if (!is.null(self$`filter`)) {
        GetScrubIpDetails200ResponseFilterFirewallFiltersInnerObject[["filter"]] <-
          self$`filter`
      }
      return(GetScrubIpDetails200ResponseFilterFirewallFiltersInnerObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of GetScrubIpDetails200ResponseFilterFirewallFiltersInner
    #'
    #' @param input_json the JSON input
    #' @return the instance of GetScrubIpDetails200ResponseFilterFirewallFiltersInner
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`daddr`)) {
        self$`daddr` <- this_object$`daddr`
      }
      if (!is.null(this_object$`dest`)) {
        self$`dest` <- this_object$`dest`
      }
      if (!is.null(this_object$`filter_name`)) {
        self$`filter_name` <- this_object$`filter_name`
      }
      if (!is.null(this_object$`destination_ip`)) {
        self$`destination_ip` <- this_object$`destination_ip`
      }
      if (!is.null(this_object$`filter`)) {
        self$`filter` <- this_object$`filter`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return GetScrubIpDetails200ResponseFilterFirewallFiltersInner in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of GetScrubIpDetails200ResponseFilterFirewallFiltersInner
    #'
    #' @param input_json the JSON input
    #' @return the instance of GetScrubIpDetails200ResponseFilterFirewallFiltersInner
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`daddr` <- this_object$`daddr`
      self$`dest` <- this_object$`dest`
      self$`filter_name` <- this_object$`filter_name`
      self$`destination_ip` <- this_object$`destination_ip`
      self$`filter` <- this_object$`filter`
      self
    },

    #' @description
    #' Validate JSON input with respect to GetScrubIpDetails200ResponseFilterFirewallFiltersInner and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of GetScrubIpDetails200ResponseFilterFirewallFiltersInner
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
# GetScrubIpDetails200ResponseFilterFirewallFiltersInner$unlock()
#
## Below is an example to define the print function
# GetScrubIpDetails200ResponseFilterFirewallFiltersInner$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# GetScrubIpDetails200ResponseFilterFirewallFiltersInner$lock()

