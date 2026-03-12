#' Create a new ScrubIpsLogRowSchema
#'
#' @description
#' ScrubIpsLogRowSchema Class
#'
#' @docType class
#' @title ScrubIpsLogRowSchema
#' @description ScrubIpsLogRowSchema Class
#' @format An \code{R6Class} generator object
#' @field date  character [optional]
#' @field filter  character [optional]
#' @field blocked_ip  character [optional]
#' @field target_ip  character [optional]
#' @field target_port  numeric [optional]
#' @field protocol  character [optional]
#' @field byte_count  numeric [optional]
#' @field xdp_action  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ScrubIpsLogRowSchema <- R6::R6Class(
  "ScrubIpsLogRowSchema",
  public = list(
    `date` = NULL,
    `filter` = NULL,
    `blocked_ip` = NULL,
    `target_ip` = NULL,
    `target_port` = NULL,
    `protocol` = NULL,
    `byte_count` = NULL,
    `xdp_action` = NULL,

    #' @description
    #' Initialize a new ScrubIpsLogRowSchema class.
    #'
    #' @param date date
    #' @param filter filter
    #' @param blocked_ip blocked_ip
    #' @param target_ip target_ip
    #' @param target_port target_port
    #' @param protocol protocol
    #' @param byte_count byte_count
    #' @param xdp_action xdp_action
    #' @param ... Other optional arguments.
    initialize = function(`date` = NULL, `filter` = NULL, `blocked_ip` = NULL, `target_ip` = NULL, `target_port` = NULL, `protocol` = NULL, `byte_count` = NULL, `xdp_action` = NULL, ...) {
      if (!is.null(`date`)) {
        if (!(is.character(`date`) && length(`date`) == 1)) {
          stop(paste("Error! Invalid data for `date`. Must be a string:", `date`))
        }
        self$`date` <- `date`
      }
      if (!is.null(`filter`)) {
        if (!(is.character(`filter`) && length(`filter`) == 1)) {
          stop(paste("Error! Invalid data for `filter`. Must be a string:", `filter`))
        }
        self$`filter` <- `filter`
      }
      if (!is.null(`blocked_ip`)) {
        if (!(is.character(`blocked_ip`) && length(`blocked_ip`) == 1)) {
          stop(paste("Error! Invalid data for `blocked_ip`. Must be a string:", `blocked_ip`))
        }
        self$`blocked_ip` <- `blocked_ip`
      }
      if (!is.null(`target_ip`)) {
        if (!(is.character(`target_ip`) && length(`target_ip`) == 1)) {
          stop(paste("Error! Invalid data for `target_ip`. Must be a string:", `target_ip`))
        }
        self$`target_ip` <- `target_ip`
      }
      if (!is.null(`target_port`)) {
        self$`target_port` <- `target_port`
      }
      if (!is.null(`protocol`)) {
        if (!(is.character(`protocol`) && length(`protocol`) == 1)) {
          stop(paste("Error! Invalid data for `protocol`. Must be a string:", `protocol`))
        }
        self$`protocol` <- `protocol`
      }
      if (!is.null(`byte_count`)) {
        self$`byte_count` <- `byte_count`
      }
      if (!is.null(`xdp_action`)) {
        if (!(is.character(`xdp_action`) && length(`xdp_action`) == 1)) {
          stop(paste("Error! Invalid data for `xdp_action`. Must be a string:", `xdp_action`))
        }
        self$`xdp_action` <- `xdp_action`
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
    #' @return ScrubIpsLogRowSchema as a base R list.
    #' @examples
    #' # convert array of ScrubIpsLogRowSchema (x) to a data frame
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
    #' Convert ScrubIpsLogRowSchema to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ScrubIpsLogRowSchemaObject <- list()
      if (!is.null(self$`date`)) {
        ScrubIpsLogRowSchemaObject[["date"]] <-
          self$`date`
      }
      if (!is.null(self$`filter`)) {
        ScrubIpsLogRowSchemaObject[["filter"]] <-
          self$`filter`
      }
      if (!is.null(self$`blocked_ip`)) {
        ScrubIpsLogRowSchemaObject[["blocked_ip"]] <-
          self$`blocked_ip`
      }
      if (!is.null(self$`target_ip`)) {
        ScrubIpsLogRowSchemaObject[["target_ip"]] <-
          self$`target_ip`
      }
      if (!is.null(self$`target_port`)) {
        ScrubIpsLogRowSchemaObject[["target_port"]] <-
          self$`target_port`
      }
      if (!is.null(self$`protocol`)) {
        ScrubIpsLogRowSchemaObject[["protocol"]] <-
          self$`protocol`
      }
      if (!is.null(self$`byte_count`)) {
        ScrubIpsLogRowSchemaObject[["byte_count"]] <-
          self$`byte_count`
      }
      if (!is.null(self$`xdp_action`)) {
        ScrubIpsLogRowSchemaObject[["xdp_action"]] <-
          self$`xdp_action`
      }
      return(ScrubIpsLogRowSchemaObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of ScrubIpsLogRowSchema
    #'
    #' @param input_json the JSON input
    #' @return the instance of ScrubIpsLogRowSchema
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`date`)) {
        self$`date` <- this_object$`date`
      }
      if (!is.null(this_object$`filter`)) {
        self$`filter` <- this_object$`filter`
      }
      if (!is.null(this_object$`blocked_ip`)) {
        self$`blocked_ip` <- this_object$`blocked_ip`
      }
      if (!is.null(this_object$`target_ip`)) {
        self$`target_ip` <- this_object$`target_ip`
      }
      if (!is.null(this_object$`target_port`)) {
        self$`target_port` <- this_object$`target_port`
      }
      if (!is.null(this_object$`protocol`)) {
        self$`protocol` <- this_object$`protocol`
      }
      if (!is.null(this_object$`byte_count`)) {
        self$`byte_count` <- this_object$`byte_count`
      }
      if (!is.null(this_object$`xdp_action`)) {
        self$`xdp_action` <- this_object$`xdp_action`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ScrubIpsLogRowSchema in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ScrubIpsLogRowSchema
    #'
    #' @param input_json the JSON input
    #' @return the instance of ScrubIpsLogRowSchema
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`date` <- this_object$`date`
      self$`filter` <- this_object$`filter`
      self$`blocked_ip` <- this_object$`blocked_ip`
      self$`target_ip` <- this_object$`target_ip`
      self$`target_port` <- this_object$`target_port`
      self$`protocol` <- this_object$`protocol`
      self$`byte_count` <- this_object$`byte_count`
      self$`xdp_action` <- this_object$`xdp_action`
      self
    },

    #' @description
    #' Validate JSON input with respect to ScrubIpsLogRowSchema and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ScrubIpsLogRowSchema
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
# ScrubIpsLogRowSchema$unlock()
#
## Below is an example to define the print function
# ScrubIpsLogRowSchema$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ScrubIpsLogRowSchema$lock()

