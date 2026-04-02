#' Create a new WebsitesOrderJsonServiceOffersItem
#'
#' @description
#' WebsitesOrderJsonServiceOffersItem Class
#'
#' @docType class
#' @title WebsitesOrderJsonServiceOffersItem
#' @description WebsitesOrderJsonServiceOffersItem Class
#' @format An \code{R6Class} generator object
#' @field service_offer_id Service offer ID character [optional]
#' @field service_id Service ID character [optional]
#' @field intro_cost Introductory cost integer [optional]
#' @field renewal_cost Renewal cost integer [optional]
#' @field intro_frequency Introductory frequency character [optional]
#' @field renewal_frequency Renewal frequency character [optional]
#' @field allow_coupon Allow coupon character [optional]
#' @field service_module Service module character [optional]
#' @field created_at Creation date character [optional]
#' @field updated_at Update date character [optional]
#' @field deleted_at Deletion date character [optional]
#' @field currencySymbol Currency symbol character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
WebsitesOrderJsonServiceOffersItem <- R6::R6Class(
  "WebsitesOrderJsonServiceOffersItem",
  public = list(
    `service_offer_id` = NULL,
    `service_id` = NULL,
    `intro_cost` = NULL,
    `renewal_cost` = NULL,
    `intro_frequency` = NULL,
    `renewal_frequency` = NULL,
    `allow_coupon` = NULL,
    `service_module` = NULL,
    `created_at` = NULL,
    `updated_at` = NULL,
    `deleted_at` = NULL,
    `currencySymbol` = NULL,

    #' @description
    #' Initialize a new WebsitesOrderJsonServiceOffersItem class.
    #'
    #' @param service_offer_id Service offer ID
    #' @param service_id Service ID
    #' @param intro_cost Introductory cost
    #' @param renewal_cost Renewal cost
    #' @param intro_frequency Introductory frequency
    #' @param renewal_frequency Renewal frequency
    #' @param allow_coupon Allow coupon
    #' @param service_module Service module
    #' @param created_at Creation date
    #' @param updated_at Update date
    #' @param deleted_at Deletion date
    #' @param currencySymbol Currency symbol
    #' @param ... Other optional arguments.
    initialize = function(`service_offer_id` = NULL, `service_id` = NULL, `intro_cost` = NULL, `renewal_cost` = NULL, `intro_frequency` = NULL, `renewal_frequency` = NULL, `allow_coupon` = NULL, `service_module` = NULL, `created_at` = NULL, `updated_at` = NULL, `deleted_at` = NULL, `currencySymbol` = NULL, ...) {
      if (!is.null(`service_offer_id`)) {
        if (!(is.character(`service_offer_id`) && length(`service_offer_id`) == 1)) {
          stop(paste("Error! Invalid data for `service_offer_id`. Must be a string:", `service_offer_id`))
        }
        self$`service_offer_id` <- `service_offer_id`
      }
      if (!is.null(`service_id`)) {
        if (!(is.character(`service_id`) && length(`service_id`) == 1)) {
          stop(paste("Error! Invalid data for `service_id`. Must be a string:", `service_id`))
        }
        self$`service_id` <- `service_id`
      }
      if (!is.null(`intro_cost`)) {
        if (!(is.numeric(`intro_cost`) && length(`intro_cost`) == 1)) {
          stop(paste("Error! Invalid data for `intro_cost`. Must be an integer:", `intro_cost`))
        }
        self$`intro_cost` <- `intro_cost`
      }
      if (!is.null(`renewal_cost`)) {
        if (!(is.numeric(`renewal_cost`) && length(`renewal_cost`) == 1)) {
          stop(paste("Error! Invalid data for `renewal_cost`. Must be an integer:", `renewal_cost`))
        }
        self$`renewal_cost` <- `renewal_cost`
      }
      if (!is.null(`intro_frequency`)) {
        if (!(is.character(`intro_frequency`) && length(`intro_frequency`) == 1)) {
          stop(paste("Error! Invalid data for `intro_frequency`. Must be a string:", `intro_frequency`))
        }
        self$`intro_frequency` <- `intro_frequency`
      }
      if (!is.null(`renewal_frequency`)) {
        if (!(is.character(`renewal_frequency`) && length(`renewal_frequency`) == 1)) {
          stop(paste("Error! Invalid data for `renewal_frequency`. Must be a string:", `renewal_frequency`))
        }
        self$`renewal_frequency` <- `renewal_frequency`
      }
      if (!is.null(`allow_coupon`)) {
        if (!(is.character(`allow_coupon`) && length(`allow_coupon`) == 1)) {
          stop(paste("Error! Invalid data for `allow_coupon`. Must be a string:", `allow_coupon`))
        }
        self$`allow_coupon` <- `allow_coupon`
      }
      if (!is.null(`service_module`)) {
        if (!(is.character(`service_module`) && length(`service_module`) == 1)) {
          stop(paste("Error! Invalid data for `service_module`. Must be a string:", `service_module`))
        }
        self$`service_module` <- `service_module`
      }
      if (!is.null(`created_at`)) {
        if (!(is.character(`created_at`) && length(`created_at`) == 1)) {
          stop(paste("Error! Invalid data for `created_at`. Must be a string:", `created_at`))
        }
        self$`created_at` <- `created_at`
      }
      if (!is.null(`updated_at`)) {
        if (!(is.character(`updated_at`) && length(`updated_at`) == 1)) {
          stop(paste("Error! Invalid data for `updated_at`. Must be a string:", `updated_at`))
        }
        self$`updated_at` <- `updated_at`
      }
      if (!is.null(`deleted_at`)) {
        if (!(is.character(`deleted_at`) && length(`deleted_at`) == 1)) {
          stop(paste("Error! Invalid data for `deleted_at`. Must be a string:", `deleted_at`))
        }
        self$`deleted_at` <- `deleted_at`
      }
      if (!is.null(`currencySymbol`)) {
        if (!(is.character(`currencySymbol`) && length(`currencySymbol`) == 1)) {
          stop(paste("Error! Invalid data for `currencySymbol`. Must be a string:", `currencySymbol`))
        }
        self$`currencySymbol` <- `currencySymbol`
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
    #' @return WebsitesOrderJsonServiceOffersItem as a base R list.
    #' @examples
    #' # convert array of WebsitesOrderJsonServiceOffersItem (x) to a data frame
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
    #' Convert WebsitesOrderJsonServiceOffersItem to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      WebsitesOrderJsonServiceOffersItemObject <- list()
      if (!is.null(self$`service_offer_id`)) {
        WebsitesOrderJsonServiceOffersItemObject[["service_offer_id"]] <-
          self$`service_offer_id`
      }
      if (!is.null(self$`service_id`)) {
        WebsitesOrderJsonServiceOffersItemObject[["service_id"]] <-
          self$`service_id`
      }
      if (!is.null(self$`intro_cost`)) {
        WebsitesOrderJsonServiceOffersItemObject[["intro_cost"]] <-
          self$`intro_cost`
      }
      if (!is.null(self$`renewal_cost`)) {
        WebsitesOrderJsonServiceOffersItemObject[["renewal_cost"]] <-
          self$`renewal_cost`
      }
      if (!is.null(self$`intro_frequency`)) {
        WebsitesOrderJsonServiceOffersItemObject[["intro_frequency"]] <-
          self$`intro_frequency`
      }
      if (!is.null(self$`renewal_frequency`)) {
        WebsitesOrderJsonServiceOffersItemObject[["renewal_frequency"]] <-
          self$`renewal_frequency`
      }
      if (!is.null(self$`allow_coupon`)) {
        WebsitesOrderJsonServiceOffersItemObject[["allow_coupon"]] <-
          self$`allow_coupon`
      }
      if (!is.null(self$`service_module`)) {
        WebsitesOrderJsonServiceOffersItemObject[["service_module"]] <-
          self$`service_module`
      }
      if (!is.null(self$`created_at`)) {
        WebsitesOrderJsonServiceOffersItemObject[["created_at"]] <-
          self$`created_at`
      }
      if (!is.null(self$`updated_at`)) {
        WebsitesOrderJsonServiceOffersItemObject[["updated_at"]] <-
          self$`updated_at`
      }
      if (!is.null(self$`deleted_at`)) {
        WebsitesOrderJsonServiceOffersItemObject[["deleted_at"]] <-
          self$`deleted_at`
      }
      if (!is.null(self$`currencySymbol`)) {
        WebsitesOrderJsonServiceOffersItemObject[["currencySymbol"]] <-
          self$`currencySymbol`
      }
      return(WebsitesOrderJsonServiceOffersItemObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of WebsitesOrderJsonServiceOffersItem
    #'
    #' @param input_json the JSON input
    #' @return the instance of WebsitesOrderJsonServiceOffersItem
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`service_offer_id`)) {
        self$`service_offer_id` <- this_object$`service_offer_id`
      }
      if (!is.null(this_object$`service_id`)) {
        self$`service_id` <- this_object$`service_id`
      }
      if (!is.null(this_object$`intro_cost`)) {
        self$`intro_cost` <- this_object$`intro_cost`
      }
      if (!is.null(this_object$`renewal_cost`)) {
        self$`renewal_cost` <- this_object$`renewal_cost`
      }
      if (!is.null(this_object$`intro_frequency`)) {
        self$`intro_frequency` <- this_object$`intro_frequency`
      }
      if (!is.null(this_object$`renewal_frequency`)) {
        self$`renewal_frequency` <- this_object$`renewal_frequency`
      }
      if (!is.null(this_object$`allow_coupon`)) {
        self$`allow_coupon` <- this_object$`allow_coupon`
      }
      if (!is.null(this_object$`service_module`)) {
        self$`service_module` <- this_object$`service_module`
      }
      if (!is.null(this_object$`created_at`)) {
        self$`created_at` <- this_object$`created_at`
      }
      if (!is.null(this_object$`updated_at`)) {
        self$`updated_at` <- this_object$`updated_at`
      }
      if (!is.null(this_object$`deleted_at`)) {
        self$`deleted_at` <- this_object$`deleted_at`
      }
      if (!is.null(this_object$`currencySymbol`)) {
        self$`currencySymbol` <- this_object$`currencySymbol`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return WebsitesOrderJsonServiceOffersItem in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of WebsitesOrderJsonServiceOffersItem
    #'
    #' @param input_json the JSON input
    #' @return the instance of WebsitesOrderJsonServiceOffersItem
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`service_offer_id` <- this_object$`service_offer_id`
      self$`service_id` <- this_object$`service_id`
      self$`intro_cost` <- this_object$`intro_cost`
      self$`renewal_cost` <- this_object$`renewal_cost`
      self$`intro_frequency` <- this_object$`intro_frequency`
      self$`renewal_frequency` <- this_object$`renewal_frequency`
      self$`allow_coupon` <- this_object$`allow_coupon`
      self$`service_module` <- this_object$`service_module`
      self$`created_at` <- this_object$`created_at`
      self$`updated_at` <- this_object$`updated_at`
      self$`deleted_at` <- this_object$`deleted_at`
      self$`currencySymbol` <- this_object$`currencySymbol`
      self
    },

    #' @description
    #' Validate JSON input with respect to WebsitesOrderJsonServiceOffersItem and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of WebsitesOrderJsonServiceOffersItem
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
# WebsitesOrderJsonServiceOffersItem$unlock()
#
## Below is an example to define the print function
# WebsitesOrderJsonServiceOffersItem$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# WebsitesOrderJsonServiceOffersItem$lock()

