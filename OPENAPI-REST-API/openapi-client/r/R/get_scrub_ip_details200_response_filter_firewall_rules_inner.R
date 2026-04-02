#' Create a new GetScrubIpDetails200ResponseFilterFirewallRulesInner
#'
#' @description
#' GetScrubIpDetails200ResponseFilterFirewallRulesInner Class
#'
#' @docType class
#' @title GetScrubIpDetails200ResponseFilterFirewallRulesInner
#' @description GetScrubIpDetails200ResponseFilterFirewallRulesInner Class
#' @format An \code{R6Class} generator object
#' @field id  character [optional]
#' @field source_ip  character [optional]
#' @field destination_ip  character [optional]
#' @field protocol_id  character [optional]
#' @field source_port  character [optional]
#' @field destination_port  character [optional]
#' @field xdp_action  character [optional]
#' @field global_drop  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
GetScrubIpDetails200ResponseFilterFirewallRulesInner <- R6::R6Class(
  "GetScrubIpDetails200ResponseFilterFirewallRulesInner",
  public = list(
    `id` = NULL,
    `source_ip` = NULL,
    `destination_ip` = NULL,
    `protocol_id` = NULL,
    `source_port` = NULL,
    `destination_port` = NULL,
    `xdp_action` = NULL,
    `global_drop` = NULL,

    #' @description
    #' Initialize a new GetScrubIpDetails200ResponseFilterFirewallRulesInner class.
    #'
    #' @param id id
    #' @param source_ip source_ip
    #' @param destination_ip destination_ip
    #' @param protocol_id protocol_id
    #' @param source_port source_port
    #' @param destination_port destination_port
    #' @param xdp_action xdp_action
    #' @param global_drop global_drop
    #' @param ... Other optional arguments.
    initialize = function(`id` = NULL, `source_ip` = NULL, `destination_ip` = NULL, `protocol_id` = NULL, `source_port` = NULL, `destination_port` = NULL, `xdp_action` = NULL, `global_drop` = NULL, ...) {
      if (!is.null(`id`)) {
        if (!(is.character(`id`) && length(`id`) == 1)) {
          stop(paste("Error! Invalid data for `id`. Must be a string:", `id`))
        }
        self$`id` <- `id`
      }
      if (!is.null(`source_ip`)) {
        if (!(is.character(`source_ip`) && length(`source_ip`) == 1)) {
          stop(paste("Error! Invalid data for `source_ip`. Must be a string:", `source_ip`))
        }
        self$`source_ip` <- `source_ip`
      }
      if (!is.null(`destination_ip`)) {
        if (!(is.character(`destination_ip`) && length(`destination_ip`) == 1)) {
          stop(paste("Error! Invalid data for `destination_ip`. Must be a string:", `destination_ip`))
        }
        self$`destination_ip` <- `destination_ip`
      }
      if (!is.null(`protocol_id`)) {
        if (!(is.character(`protocol_id`) && length(`protocol_id`) == 1)) {
          stop(paste("Error! Invalid data for `protocol_id`. Must be a string:", `protocol_id`))
        }
        self$`protocol_id` <- `protocol_id`
      }
      if (!is.null(`source_port`)) {
        if (!(is.character(`source_port`) && length(`source_port`) == 1)) {
          stop(paste("Error! Invalid data for `source_port`. Must be a string:", `source_port`))
        }
        self$`source_port` <- `source_port`
      }
      if (!is.null(`destination_port`)) {
        if (!(is.character(`destination_port`) && length(`destination_port`) == 1)) {
          stop(paste("Error! Invalid data for `destination_port`. Must be a string:", `destination_port`))
        }
        self$`destination_port` <- `destination_port`
      }
      if (!is.null(`xdp_action`)) {
        if (!(is.character(`xdp_action`) && length(`xdp_action`) == 1)) {
          stop(paste("Error! Invalid data for `xdp_action`. Must be a string:", `xdp_action`))
        }
        self$`xdp_action` <- `xdp_action`
      }
      if (!is.null(`global_drop`)) {
        if (!(is.character(`global_drop`) && length(`global_drop`) == 1)) {
          stop(paste("Error! Invalid data for `global_drop`. Must be a string:", `global_drop`))
        }
        self$`global_drop` <- `global_drop`
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
    #' @return GetScrubIpDetails200ResponseFilterFirewallRulesInner as a base R list.
    #' @examples
    #' # convert array of GetScrubIpDetails200ResponseFilterFirewallRulesInner (x) to a data frame
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
    #' Convert GetScrubIpDetails200ResponseFilterFirewallRulesInner to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      GetScrubIpDetails200ResponseFilterFirewallRulesInnerObject <- list()
      if (!is.null(self$`id`)) {
        GetScrubIpDetails200ResponseFilterFirewallRulesInnerObject[["id"]] <-
          self$`id`
      }
      if (!is.null(self$`source_ip`)) {
        GetScrubIpDetails200ResponseFilterFirewallRulesInnerObject[["source_ip"]] <-
          self$`source_ip`
      }
      if (!is.null(self$`destination_ip`)) {
        GetScrubIpDetails200ResponseFilterFirewallRulesInnerObject[["destination_ip"]] <-
          self$`destination_ip`
      }
      if (!is.null(self$`protocol_id`)) {
        GetScrubIpDetails200ResponseFilterFirewallRulesInnerObject[["protocol_id"]] <-
          self$`protocol_id`
      }
      if (!is.null(self$`source_port`)) {
        GetScrubIpDetails200ResponseFilterFirewallRulesInnerObject[["source_port"]] <-
          self$`source_port`
      }
      if (!is.null(self$`destination_port`)) {
        GetScrubIpDetails200ResponseFilterFirewallRulesInnerObject[["destination_port"]] <-
          self$`destination_port`
      }
      if (!is.null(self$`xdp_action`)) {
        GetScrubIpDetails200ResponseFilterFirewallRulesInnerObject[["xdp_action"]] <-
          self$`xdp_action`
      }
      if (!is.null(self$`global_drop`)) {
        GetScrubIpDetails200ResponseFilterFirewallRulesInnerObject[["global_drop"]] <-
          self$`global_drop`
      }
      return(GetScrubIpDetails200ResponseFilterFirewallRulesInnerObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of GetScrubIpDetails200ResponseFilterFirewallRulesInner
    #'
    #' @param input_json the JSON input
    #' @return the instance of GetScrubIpDetails200ResponseFilterFirewallRulesInner
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`id`)) {
        self$`id` <- this_object$`id`
      }
      if (!is.null(this_object$`source_ip`)) {
        self$`source_ip` <- this_object$`source_ip`
      }
      if (!is.null(this_object$`destination_ip`)) {
        self$`destination_ip` <- this_object$`destination_ip`
      }
      if (!is.null(this_object$`protocol_id`)) {
        self$`protocol_id` <- this_object$`protocol_id`
      }
      if (!is.null(this_object$`source_port`)) {
        self$`source_port` <- this_object$`source_port`
      }
      if (!is.null(this_object$`destination_port`)) {
        self$`destination_port` <- this_object$`destination_port`
      }
      if (!is.null(this_object$`xdp_action`)) {
        self$`xdp_action` <- this_object$`xdp_action`
      }
      if (!is.null(this_object$`global_drop`)) {
        self$`global_drop` <- this_object$`global_drop`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return GetScrubIpDetails200ResponseFilterFirewallRulesInner in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of GetScrubIpDetails200ResponseFilterFirewallRulesInner
    #'
    #' @param input_json the JSON input
    #' @return the instance of GetScrubIpDetails200ResponseFilterFirewallRulesInner
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`id` <- this_object$`id`
      self$`source_ip` <- this_object$`source_ip`
      self$`destination_ip` <- this_object$`destination_ip`
      self$`protocol_id` <- this_object$`protocol_id`
      self$`source_port` <- this_object$`source_port`
      self$`destination_port` <- this_object$`destination_port`
      self$`xdp_action` <- this_object$`xdp_action`
      self$`global_drop` <- this_object$`global_drop`
      self
    },

    #' @description
    #' Validate JSON input with respect to GetScrubIpDetails200ResponseFilterFirewallRulesInner and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of GetScrubIpDetails200ResponseFilterFirewallRulesInner
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
# GetScrubIpDetails200ResponseFilterFirewallRulesInner$unlock()
#
## Below is an example to define the print function
# GetScrubIpDetails200ResponseFilterFirewallRulesInner$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# GetScrubIpDetails200ResponseFilterFirewallRulesInner$lock()

