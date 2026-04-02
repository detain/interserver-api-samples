#' Create a new WebsiteServiceMaster
#'
#' @description
#' WebsiteServiceMaster Class
#'
#' @docType class
#' @title WebsiteServiceMaster
#' @description WebsiteServiceMaster Class
#' @format An \code{R6Class} generator object
#' @field website_id Website ID for the service master character [optional]
#' @field website_name Website name for the service master character [optional]
#' @field website_ip IP address for the service master character [optional]
#' @field website_type Website type for the service master character [optional]
#' @field website_available Availability status for the service master character [optional]
#' @field website_hdsize Hard drive size for the service master character [optional]
#' @field website_hdfree Free hard drive space for the service master character [optional]
#' @field website_load Load for the service master character [optional]
#' @field website_last_update Last update date for the service master character [optional]
#' @field website_max_sites Maximum number of sites for the service master character [optional]
#' @field website_order Order number for the service master character [optional]
#' @field website_partitions Partitions for the service master character [optional]
#' @field website_dns1 DNS server 1 for the service master character [optional]
#' @field website_dns2 DNS server 2 for the service master character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
WebsiteServiceMaster <- R6::R6Class(
  "WebsiteServiceMaster",
  public = list(
    `website_id` = NULL,
    `website_name` = NULL,
    `website_ip` = NULL,
    `website_type` = NULL,
    `website_available` = NULL,
    `website_hdsize` = NULL,
    `website_hdfree` = NULL,
    `website_load` = NULL,
    `website_last_update` = NULL,
    `website_max_sites` = NULL,
    `website_order` = NULL,
    `website_partitions` = NULL,
    `website_dns1` = NULL,
    `website_dns2` = NULL,

    #' @description
    #' Initialize a new WebsiteServiceMaster class.
    #'
    #' @param website_id Website ID for the service master
    #' @param website_name Website name for the service master
    #' @param website_ip IP address for the service master
    #' @param website_type Website type for the service master
    #' @param website_available Availability status for the service master
    #' @param website_hdsize Hard drive size for the service master
    #' @param website_hdfree Free hard drive space for the service master
    #' @param website_load Load for the service master
    #' @param website_last_update Last update date for the service master
    #' @param website_max_sites Maximum number of sites for the service master
    #' @param website_order Order number for the service master
    #' @param website_partitions Partitions for the service master
    #' @param website_dns1 DNS server 1 for the service master
    #' @param website_dns2 DNS server 2 for the service master
    #' @param ... Other optional arguments.
    initialize = function(`website_id` = NULL, `website_name` = NULL, `website_ip` = NULL, `website_type` = NULL, `website_available` = NULL, `website_hdsize` = NULL, `website_hdfree` = NULL, `website_load` = NULL, `website_last_update` = NULL, `website_max_sites` = NULL, `website_order` = NULL, `website_partitions` = NULL, `website_dns1` = NULL, `website_dns2` = NULL, ...) {
      if (!is.null(`website_id`)) {
        if (!(is.character(`website_id`) && length(`website_id`) == 1)) {
          stop(paste("Error! Invalid data for `website_id`. Must be a string:", `website_id`))
        }
        self$`website_id` <- `website_id`
      }
      if (!is.null(`website_name`)) {
        if (!(is.character(`website_name`) && length(`website_name`) == 1)) {
          stop(paste("Error! Invalid data for `website_name`. Must be a string:", `website_name`))
        }
        self$`website_name` <- `website_name`
      }
      if (!is.null(`website_ip`)) {
        if (!(is.character(`website_ip`) && length(`website_ip`) == 1)) {
          stop(paste("Error! Invalid data for `website_ip`. Must be a string:", `website_ip`))
        }
        self$`website_ip` <- `website_ip`
      }
      if (!is.null(`website_type`)) {
        if (!(is.character(`website_type`) && length(`website_type`) == 1)) {
          stop(paste("Error! Invalid data for `website_type`. Must be a string:", `website_type`))
        }
        self$`website_type` <- `website_type`
      }
      if (!is.null(`website_available`)) {
        if (!(is.character(`website_available`) && length(`website_available`) == 1)) {
          stop(paste("Error! Invalid data for `website_available`. Must be a string:", `website_available`))
        }
        self$`website_available` <- `website_available`
      }
      if (!is.null(`website_hdsize`)) {
        if (!(is.character(`website_hdsize`) && length(`website_hdsize`) == 1)) {
          stop(paste("Error! Invalid data for `website_hdsize`. Must be a string:", `website_hdsize`))
        }
        self$`website_hdsize` <- `website_hdsize`
      }
      if (!is.null(`website_hdfree`)) {
        if (!(is.character(`website_hdfree`) && length(`website_hdfree`) == 1)) {
          stop(paste("Error! Invalid data for `website_hdfree`. Must be a string:", `website_hdfree`))
        }
        self$`website_hdfree` <- `website_hdfree`
      }
      if (!is.null(`website_load`)) {
        if (!(is.character(`website_load`) && length(`website_load`) == 1)) {
          stop(paste("Error! Invalid data for `website_load`. Must be a string:", `website_load`))
        }
        self$`website_load` <- `website_load`
      }
      if (!is.null(`website_last_update`)) {
        if (!(is.character(`website_last_update`) && length(`website_last_update`) == 1)) {
          stop(paste("Error! Invalid data for `website_last_update`. Must be a string:", `website_last_update`))
        }
        self$`website_last_update` <- `website_last_update`
      }
      if (!is.null(`website_max_sites`)) {
        if (!(is.character(`website_max_sites`) && length(`website_max_sites`) == 1)) {
          stop(paste("Error! Invalid data for `website_max_sites`. Must be a string:", `website_max_sites`))
        }
        self$`website_max_sites` <- `website_max_sites`
      }
      if (!is.null(`website_order`)) {
        if (!(is.character(`website_order`) && length(`website_order`) == 1)) {
          stop(paste("Error! Invalid data for `website_order`. Must be a string:", `website_order`))
        }
        self$`website_order` <- `website_order`
      }
      if (!is.null(`website_partitions`)) {
        if (!(is.character(`website_partitions`) && length(`website_partitions`) == 1)) {
          stop(paste("Error! Invalid data for `website_partitions`. Must be a string:", `website_partitions`))
        }
        self$`website_partitions` <- `website_partitions`
      }
      if (!is.null(`website_dns1`)) {
        if (!(is.character(`website_dns1`) && length(`website_dns1`) == 1)) {
          stop(paste("Error! Invalid data for `website_dns1`. Must be a string:", `website_dns1`))
        }
        self$`website_dns1` <- `website_dns1`
      }
      if (!is.null(`website_dns2`)) {
        if (!(is.character(`website_dns2`) && length(`website_dns2`) == 1)) {
          stop(paste("Error! Invalid data for `website_dns2`. Must be a string:", `website_dns2`))
        }
        self$`website_dns2` <- `website_dns2`
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
    #' @return WebsiteServiceMaster as a base R list.
    #' @examples
    #' # convert array of WebsiteServiceMaster (x) to a data frame
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
    #' Convert WebsiteServiceMaster to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      WebsiteServiceMasterObject <- list()
      if (!is.null(self$`website_id`)) {
        WebsiteServiceMasterObject[["website_id"]] <-
          self$`website_id`
      }
      if (!is.null(self$`website_name`)) {
        WebsiteServiceMasterObject[["website_name"]] <-
          self$`website_name`
      }
      if (!is.null(self$`website_ip`)) {
        WebsiteServiceMasterObject[["website_ip"]] <-
          self$`website_ip`
      }
      if (!is.null(self$`website_type`)) {
        WebsiteServiceMasterObject[["website_type"]] <-
          self$`website_type`
      }
      if (!is.null(self$`website_available`)) {
        WebsiteServiceMasterObject[["website_available"]] <-
          self$`website_available`
      }
      if (!is.null(self$`website_hdsize`)) {
        WebsiteServiceMasterObject[["website_hdsize"]] <-
          self$`website_hdsize`
      }
      if (!is.null(self$`website_hdfree`)) {
        WebsiteServiceMasterObject[["website_hdfree"]] <-
          self$`website_hdfree`
      }
      if (!is.null(self$`website_load`)) {
        WebsiteServiceMasterObject[["website_load"]] <-
          self$`website_load`
      }
      if (!is.null(self$`website_last_update`)) {
        WebsiteServiceMasterObject[["website_last_update"]] <-
          self$`website_last_update`
      }
      if (!is.null(self$`website_max_sites`)) {
        WebsiteServiceMasterObject[["website_max_sites"]] <-
          self$`website_max_sites`
      }
      if (!is.null(self$`website_order`)) {
        WebsiteServiceMasterObject[["website_order"]] <-
          self$`website_order`
      }
      if (!is.null(self$`website_partitions`)) {
        WebsiteServiceMasterObject[["website_partitions"]] <-
          self$`website_partitions`
      }
      if (!is.null(self$`website_dns1`)) {
        WebsiteServiceMasterObject[["website_dns1"]] <-
          self$`website_dns1`
      }
      if (!is.null(self$`website_dns2`)) {
        WebsiteServiceMasterObject[["website_dns2"]] <-
          self$`website_dns2`
      }
      return(WebsiteServiceMasterObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of WebsiteServiceMaster
    #'
    #' @param input_json the JSON input
    #' @return the instance of WebsiteServiceMaster
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`website_id`)) {
        self$`website_id` <- this_object$`website_id`
      }
      if (!is.null(this_object$`website_name`)) {
        self$`website_name` <- this_object$`website_name`
      }
      if (!is.null(this_object$`website_ip`)) {
        self$`website_ip` <- this_object$`website_ip`
      }
      if (!is.null(this_object$`website_type`)) {
        self$`website_type` <- this_object$`website_type`
      }
      if (!is.null(this_object$`website_available`)) {
        self$`website_available` <- this_object$`website_available`
      }
      if (!is.null(this_object$`website_hdsize`)) {
        self$`website_hdsize` <- this_object$`website_hdsize`
      }
      if (!is.null(this_object$`website_hdfree`)) {
        self$`website_hdfree` <- this_object$`website_hdfree`
      }
      if (!is.null(this_object$`website_load`)) {
        self$`website_load` <- this_object$`website_load`
      }
      if (!is.null(this_object$`website_last_update`)) {
        self$`website_last_update` <- this_object$`website_last_update`
      }
      if (!is.null(this_object$`website_max_sites`)) {
        self$`website_max_sites` <- this_object$`website_max_sites`
      }
      if (!is.null(this_object$`website_order`)) {
        self$`website_order` <- this_object$`website_order`
      }
      if (!is.null(this_object$`website_partitions`)) {
        self$`website_partitions` <- this_object$`website_partitions`
      }
      if (!is.null(this_object$`website_dns1`)) {
        self$`website_dns1` <- this_object$`website_dns1`
      }
      if (!is.null(this_object$`website_dns2`)) {
        self$`website_dns2` <- this_object$`website_dns2`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return WebsiteServiceMaster in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of WebsiteServiceMaster
    #'
    #' @param input_json the JSON input
    #' @return the instance of WebsiteServiceMaster
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`website_id` <- this_object$`website_id`
      self$`website_name` <- this_object$`website_name`
      self$`website_ip` <- this_object$`website_ip`
      self$`website_type` <- this_object$`website_type`
      self$`website_available` <- this_object$`website_available`
      self$`website_hdsize` <- this_object$`website_hdsize`
      self$`website_hdfree` <- this_object$`website_hdfree`
      self$`website_load` <- this_object$`website_load`
      self$`website_last_update` <- this_object$`website_last_update`
      self$`website_max_sites` <- this_object$`website_max_sites`
      self$`website_order` <- this_object$`website_order`
      self$`website_partitions` <- this_object$`website_partitions`
      self$`website_dns1` <- this_object$`website_dns1`
      self$`website_dns2` <- this_object$`website_dns2`
      self
    },

    #' @description
    #' Validate JSON input with respect to WebsiteServiceMaster and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of WebsiteServiceMaster
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
# WebsiteServiceMaster$unlock()
#
## Below is an example to define the print function
# WebsiteServiceMaster$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# WebsiteServiceMaster$lock()

