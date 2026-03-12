#' Create a new WebsitesOrderServiceOffer
#'
#' @description
#' WebsitesOrderServiceOffer Class
#'
#' @docType class
#' @title WebsitesOrderServiceOffer
#' @description WebsitesOrderServiceOffer Class
#' @format An \code{R6Class} generator object
#' @field service_offer_id The ID of the service offer. character
#' @field service_id The ID of the associated service. character
#' @field intro_cost The introductory cost of the service offer. character
#' @field renewal_cost The renewal cost of the service offer. character
#' @field intro_frequency The introductory frequency of the service offer. character
#' @field renewal_frequency The renewal frequency of the service offer. character
#' @field allow_coupon Indicates if coupons are allowed (1 for yes, 0 for no). character
#' @field service_module The module of the service offer. character
#' @field created_at The creation timestamp of the service offer. character
#' @field updated_at The update timestamp of the service offer. character [optional]
#' @field deleted_at The deletion timestamp of the service offer. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
WebsitesOrderServiceOffer <- R6::R6Class(
  "WebsitesOrderServiceOffer",
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

    #' @description
    #' Initialize a new WebsitesOrderServiceOffer class.
    #'
    #' @param service_offer_id The ID of the service offer.
    #' @param service_id The ID of the associated service.
    #' @param intro_cost The introductory cost of the service offer.
    #' @param renewal_cost The renewal cost of the service offer.
    #' @param intro_frequency The introductory frequency of the service offer.
    #' @param renewal_frequency The renewal frequency of the service offer.
    #' @param allow_coupon Indicates if coupons are allowed (1 for yes, 0 for no).
    #' @param service_module The module of the service offer.
    #' @param created_at The creation timestamp of the service offer.
    #' @param updated_at The update timestamp of the service offer.
    #' @param deleted_at The deletion timestamp of the service offer.
    #' @param ... Other optional arguments.
    initialize = function(`service_offer_id`, `service_id`, `intro_cost`, `renewal_cost`, `intro_frequency`, `renewal_frequency`, `allow_coupon`, `service_module`, `created_at`, `updated_at` = NULL, `deleted_at` = NULL, ...) {
      if (!missing(`service_offer_id`)) {
        if (!(is.character(`service_offer_id`) && length(`service_offer_id`) == 1)) {
          stop(paste("Error! Invalid data for `service_offer_id`. Must be a string:", `service_offer_id`))
        }
        self$`service_offer_id` <- `service_offer_id`
      }
      if (!missing(`service_id`)) {
        if (!(is.character(`service_id`) && length(`service_id`) == 1)) {
          stop(paste("Error! Invalid data for `service_id`. Must be a string:", `service_id`))
        }
        self$`service_id` <- `service_id`
      }
      if (!missing(`intro_cost`)) {
        if (!(is.character(`intro_cost`) && length(`intro_cost`) == 1)) {
          stop(paste("Error! Invalid data for `intro_cost`. Must be a string:", `intro_cost`))
        }
        self$`intro_cost` <- `intro_cost`
      }
      if (!missing(`renewal_cost`)) {
        if (!(is.character(`renewal_cost`) && length(`renewal_cost`) == 1)) {
          stop(paste("Error! Invalid data for `renewal_cost`. Must be a string:", `renewal_cost`))
        }
        self$`renewal_cost` <- `renewal_cost`
      }
      if (!missing(`intro_frequency`)) {
        if (!(is.character(`intro_frequency`) && length(`intro_frequency`) == 1)) {
          stop(paste("Error! Invalid data for `intro_frequency`. Must be a string:", `intro_frequency`))
        }
        self$`intro_frequency` <- `intro_frequency`
      }
      if (!missing(`renewal_frequency`)) {
        if (!(is.character(`renewal_frequency`) && length(`renewal_frequency`) == 1)) {
          stop(paste("Error! Invalid data for `renewal_frequency`. Must be a string:", `renewal_frequency`))
        }
        self$`renewal_frequency` <- `renewal_frequency`
      }
      if (!missing(`allow_coupon`)) {
        if (!(is.character(`allow_coupon`) && length(`allow_coupon`) == 1)) {
          stop(paste("Error! Invalid data for `allow_coupon`. Must be a string:", `allow_coupon`))
        }
        self$`allow_coupon` <- `allow_coupon`
      }
      if (!missing(`service_module`)) {
        if (!(is.character(`service_module`) && length(`service_module`) == 1)) {
          stop(paste("Error! Invalid data for `service_module`. Must be a string:", `service_module`))
        }
        self$`service_module` <- `service_module`
      }
      if (!missing(`created_at`)) {
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
    #' @return WebsitesOrderServiceOffer as a base R list.
    #' @examples
    #' # convert array of WebsitesOrderServiceOffer (x) to a data frame
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
    #' Convert WebsitesOrderServiceOffer to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      WebsitesOrderServiceOfferObject <- list()
      if (!is.null(self$`service_offer_id`)) {
        WebsitesOrderServiceOfferObject[["service_offer_id"]] <-
          self$`service_offer_id`
      }
      if (!is.null(self$`service_id`)) {
        WebsitesOrderServiceOfferObject[["service_id"]] <-
          self$`service_id`
      }
      if (!is.null(self$`intro_cost`)) {
        WebsitesOrderServiceOfferObject[["intro_cost"]] <-
          self$`intro_cost`
      }
      if (!is.null(self$`renewal_cost`)) {
        WebsitesOrderServiceOfferObject[["renewal_cost"]] <-
          self$`renewal_cost`
      }
      if (!is.null(self$`intro_frequency`)) {
        WebsitesOrderServiceOfferObject[["intro_frequency"]] <-
          self$`intro_frequency`
      }
      if (!is.null(self$`renewal_frequency`)) {
        WebsitesOrderServiceOfferObject[["renewal_frequency"]] <-
          self$`renewal_frequency`
      }
      if (!is.null(self$`allow_coupon`)) {
        WebsitesOrderServiceOfferObject[["allow_coupon"]] <-
          self$`allow_coupon`
      }
      if (!is.null(self$`service_module`)) {
        WebsitesOrderServiceOfferObject[["service_module"]] <-
          self$`service_module`
      }
      if (!is.null(self$`created_at`)) {
        WebsitesOrderServiceOfferObject[["created_at"]] <-
          self$`created_at`
      }
      if (!is.null(self$`updated_at`)) {
        WebsitesOrderServiceOfferObject[["updated_at"]] <-
          self$`updated_at`
      }
      if (!is.null(self$`deleted_at`)) {
        WebsitesOrderServiceOfferObject[["deleted_at"]] <-
          self$`deleted_at`
      }
      return(WebsitesOrderServiceOfferObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of WebsitesOrderServiceOffer
    #'
    #' @param input_json the JSON input
    #' @return the instance of WebsitesOrderServiceOffer
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
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return WebsitesOrderServiceOffer in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of WebsitesOrderServiceOffer
    #'
    #' @param input_json the JSON input
    #' @return the instance of WebsitesOrderServiceOffer
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
      self
    },

    #' @description
    #' Validate JSON input with respect to WebsitesOrderServiceOffer and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `service_offer_id`
      if (!is.null(input_json$`service_offer_id`)) {
        if (!(is.character(input_json$`service_offer_id`) && length(input_json$`service_offer_id`) == 1)) {
          stop(paste("Error! Invalid data for `service_offer_id`. Must be a string:", input_json$`service_offer_id`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsitesOrderServiceOffer: the required field `service_offer_id` is missing."))
      }
      # check the required field `service_id`
      if (!is.null(input_json$`service_id`)) {
        if (!(is.character(input_json$`service_id`) && length(input_json$`service_id`) == 1)) {
          stop(paste("Error! Invalid data for `service_id`. Must be a string:", input_json$`service_id`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsitesOrderServiceOffer: the required field `service_id` is missing."))
      }
      # check the required field `intro_cost`
      if (!is.null(input_json$`intro_cost`)) {
        if (!(is.character(input_json$`intro_cost`) && length(input_json$`intro_cost`) == 1)) {
          stop(paste("Error! Invalid data for `intro_cost`. Must be a string:", input_json$`intro_cost`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsitesOrderServiceOffer: the required field `intro_cost` is missing."))
      }
      # check the required field `renewal_cost`
      if (!is.null(input_json$`renewal_cost`)) {
        if (!(is.character(input_json$`renewal_cost`) && length(input_json$`renewal_cost`) == 1)) {
          stop(paste("Error! Invalid data for `renewal_cost`. Must be a string:", input_json$`renewal_cost`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsitesOrderServiceOffer: the required field `renewal_cost` is missing."))
      }
      # check the required field `intro_frequency`
      if (!is.null(input_json$`intro_frequency`)) {
        if (!(is.character(input_json$`intro_frequency`) && length(input_json$`intro_frequency`) == 1)) {
          stop(paste("Error! Invalid data for `intro_frequency`. Must be a string:", input_json$`intro_frequency`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsitesOrderServiceOffer: the required field `intro_frequency` is missing."))
      }
      # check the required field `renewal_frequency`
      if (!is.null(input_json$`renewal_frequency`)) {
        if (!(is.character(input_json$`renewal_frequency`) && length(input_json$`renewal_frequency`) == 1)) {
          stop(paste("Error! Invalid data for `renewal_frequency`. Must be a string:", input_json$`renewal_frequency`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsitesOrderServiceOffer: the required field `renewal_frequency` is missing."))
      }
      # check the required field `allow_coupon`
      if (!is.null(input_json$`allow_coupon`)) {
        if (!(is.character(input_json$`allow_coupon`) && length(input_json$`allow_coupon`) == 1)) {
          stop(paste("Error! Invalid data for `allow_coupon`. Must be a string:", input_json$`allow_coupon`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsitesOrderServiceOffer: the required field `allow_coupon` is missing."))
      }
      # check the required field `service_module`
      if (!is.null(input_json$`service_module`)) {
        if (!(is.character(input_json$`service_module`) && length(input_json$`service_module`) == 1)) {
          stop(paste("Error! Invalid data for `service_module`. Must be a string:", input_json$`service_module`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsitesOrderServiceOffer: the required field `service_module` is missing."))
      }
      # check the required field `created_at`
      if (!is.null(input_json$`created_at`)) {
        if (!(is.character(input_json$`created_at`) && length(input_json$`created_at`) == 1)) {
          stop(paste("Error! Invalid data for `created_at`. Must be a string:", input_json$`created_at`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsitesOrderServiceOffer: the required field `created_at` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of WebsitesOrderServiceOffer
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `service_offer_id` is null
      if (is.null(self$`service_offer_id`)) {
        return(FALSE)
      }

      # check if the required `service_id` is null
      if (is.null(self$`service_id`)) {
        return(FALSE)
      }

      # check if the required `intro_cost` is null
      if (is.null(self$`intro_cost`)) {
        return(FALSE)
      }

      # check if the required `renewal_cost` is null
      if (is.null(self$`renewal_cost`)) {
        return(FALSE)
      }

      # check if the required `intro_frequency` is null
      if (is.null(self$`intro_frequency`)) {
        return(FALSE)
      }

      # check if the required `renewal_frequency` is null
      if (is.null(self$`renewal_frequency`)) {
        return(FALSE)
      }

      # check if the required `allow_coupon` is null
      if (is.null(self$`allow_coupon`)) {
        return(FALSE)
      }

      # check if the required `service_module` is null
      if (is.null(self$`service_module`)) {
        return(FALSE)
      }

      # check if the required `created_at` is null
      if (is.null(self$`created_at`)) {
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
      # check if the required `service_offer_id` is null
      if (is.null(self$`service_offer_id`)) {
        invalid_fields["service_offer_id"] <- "Non-nullable required field `service_offer_id` cannot be null."
      }

      # check if the required `service_id` is null
      if (is.null(self$`service_id`)) {
        invalid_fields["service_id"] <- "Non-nullable required field `service_id` cannot be null."
      }

      # check if the required `intro_cost` is null
      if (is.null(self$`intro_cost`)) {
        invalid_fields["intro_cost"] <- "Non-nullable required field `intro_cost` cannot be null."
      }

      # check if the required `renewal_cost` is null
      if (is.null(self$`renewal_cost`)) {
        invalid_fields["renewal_cost"] <- "Non-nullable required field `renewal_cost` cannot be null."
      }

      # check if the required `intro_frequency` is null
      if (is.null(self$`intro_frequency`)) {
        invalid_fields["intro_frequency"] <- "Non-nullable required field `intro_frequency` cannot be null."
      }

      # check if the required `renewal_frequency` is null
      if (is.null(self$`renewal_frequency`)) {
        invalid_fields["renewal_frequency"] <- "Non-nullable required field `renewal_frequency` cannot be null."
      }

      # check if the required `allow_coupon` is null
      if (is.null(self$`allow_coupon`)) {
        invalid_fields["allow_coupon"] <- "Non-nullable required field `allow_coupon` cannot be null."
      }

      # check if the required `service_module` is null
      if (is.null(self$`service_module`)) {
        invalid_fields["service_module"] <- "Non-nullable required field `service_module` cannot be null."
      }

      # check if the required `created_at` is null
      if (is.null(self$`created_at`)) {
        invalid_fields["created_at"] <- "Non-nullable required field `created_at` cannot be null."
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
# WebsitesOrderServiceOffer$unlock()
#
## Below is an example to define the print function
# WebsitesOrderServiceOffer$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# WebsitesOrderServiceOffer$lock()

