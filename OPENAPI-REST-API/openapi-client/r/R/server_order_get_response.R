#' Create a new ServerOrderGetResponse
#'
#' @description
#' Configuration options and pricing data returned when starting a dedicated server order.
#'
#' @docType class
#' @title ServerOrderGetResponse
#' @description ServerOrderGetResponse Class
#' @format An \code{R6Class} generator object
#' @field form_values  \link{FormValues}
#' @field config_ids  \link{ConfigIds}
#' @field cpu  integer
#' @field cpu_li  named list(\link{Cpu})
#' @field config_li  \link{ConfigLists}
#' @field field_label  named list(\link{FieldLabel}) [optional]
#' @field cpu_cores  named list(named list(\link{CpuWithDefaults})) [optional]
#' @field frequency  integer
#' @field currency  character
#' @field currencySymbol  character [optional]
#' @field country  character
#' @field custid  integer [optional]
#' @field ima  character [optional]
#' @field step  character
#' @field regions  list(\link{Region}) [optional]
#' @field asset_servers  list(\link{AssetServer}) [optional]
#' @field buy_it_servers  list(object) [optional]
#' @field display_showmore  character [optional]
#' @field cust_discount  numeric [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ServerOrderGetResponse <- R6::R6Class(
  "ServerOrderGetResponse",
  public = list(
    `form_values` = NULL,
    `config_ids` = NULL,
    `cpu` = NULL,
    `cpu_li` = NULL,
    `config_li` = NULL,
    `field_label` = NULL,
    `cpu_cores` = NULL,
    `frequency` = NULL,
    `currency` = NULL,
    `currencySymbol` = NULL,
    `country` = NULL,
    `custid` = NULL,
    `ima` = NULL,
    `step` = NULL,
    `regions` = NULL,
    `asset_servers` = NULL,
    `buy_it_servers` = NULL,
    `display_showmore` = NULL,
    `cust_discount` = NULL,

    #' @description
    #' Initialize a new ServerOrderGetResponse class.
    #'
    #' @param form_values form_values
    #' @param config_ids config_ids
    #' @param cpu cpu
    #' @param cpu_li cpu_li
    #' @param config_li config_li
    #' @param frequency frequency
    #' @param currency currency
    #' @param country country
    #' @param step step
    #' @param field_label field_label
    #' @param cpu_cores cpu_cores
    #' @param currencySymbol currencySymbol
    #' @param custid custid
    #' @param ima ima
    #' @param regions regions
    #' @param asset_servers asset_servers
    #' @param buy_it_servers buy_it_servers
    #' @param display_showmore display_showmore
    #' @param cust_discount cust_discount
    #' @param ... Other optional arguments.
    initialize = function(`form_values`, `config_ids`, `cpu`, `cpu_li`, `config_li`, `frequency`, `currency`, `country`, `step`, `field_label` = NULL, `cpu_cores` = NULL, `currencySymbol` = NULL, `custid` = NULL, `ima` = NULL, `regions` = NULL, `asset_servers` = NULL, `buy_it_servers` = NULL, `display_showmore` = NULL, `cust_discount` = NULL, ...) {
      if (!missing(`form_values`)) {
        stopifnot(R6::is.R6(`form_values`))
        self$`form_values` <- `form_values`
      }
      if (!missing(`config_ids`)) {
        stopifnot(R6::is.R6(`config_ids`))
        self$`config_ids` <- `config_ids`
      }
      if (!missing(`cpu`)) {
        if (!(is.numeric(`cpu`) && length(`cpu`) == 1)) {
          stop(paste("Error! Invalid data for `cpu`. Must be an integer:", `cpu`))
        }
        self$`cpu` <- `cpu`
      }
      if (!missing(`cpu_li`)) {
        stopifnot(is.vector(`cpu_li`), length(`cpu_li`) != 0)
        sapply(`cpu_li`, function(x) stopifnot(R6::is.R6(x)))
        self$`cpu_li` <- `cpu_li`
      }
      if (!missing(`config_li`)) {
        stopifnot(R6::is.R6(`config_li`))
        self$`config_li` <- `config_li`
      }
      if (!missing(`frequency`)) {
        if (!(is.numeric(`frequency`) && length(`frequency`) == 1)) {
          stop(paste("Error! Invalid data for `frequency`. Must be an integer:", `frequency`))
        }
        self$`frequency` <- `frequency`
      }
      if (!missing(`currency`)) {
        if (!(is.character(`currency`) && length(`currency`) == 1)) {
          stop(paste("Error! Invalid data for `currency`. Must be a string:", `currency`))
        }
        self$`currency` <- `currency`
      }
      if (!missing(`country`)) {
        if (!(is.character(`country`) && length(`country`) == 1)) {
          stop(paste("Error! Invalid data for `country`. Must be a string:", `country`))
        }
        self$`country` <- `country`
      }
      if (!missing(`step`)) {
        if (!(is.character(`step`) && length(`step`) == 1)) {
          stop(paste("Error! Invalid data for `step`. Must be a string:", `step`))
        }
        self$`step` <- `step`
      }
      if (!is.null(`field_label`)) {
        stopifnot(is.vector(`field_label`), length(`field_label`) != 0)
        sapply(`field_label`, function(x) stopifnot(R6::is.R6(x)))
        self$`field_label` <- `field_label`
      }
      if (!is.null(`cpu_cores`)) {
        stopifnot(is.vector(`cpu_cores`), length(`cpu_cores`) != 0)
        sapply(`cpu_cores`, function(x) stopifnot(R6::is.R6(x)))
        self$`cpu_cores` <- `cpu_cores`
      }
      if (!is.null(`currencySymbol`)) {
        if (!(is.character(`currencySymbol`) && length(`currencySymbol`) == 1)) {
          stop(paste("Error! Invalid data for `currencySymbol`. Must be a string:", `currencySymbol`))
        }
        self$`currencySymbol` <- `currencySymbol`
      }
      if (!is.null(`custid`)) {
        if (!(is.numeric(`custid`) && length(`custid`) == 1)) {
          stop(paste("Error! Invalid data for `custid`. Must be an integer:", `custid`))
        }
        self$`custid` <- `custid`
      }
      if (!is.null(`ima`)) {
        if (!(is.character(`ima`) && length(`ima`) == 1)) {
          stop(paste("Error! Invalid data for `ima`. Must be a string:", `ima`))
        }
        self$`ima` <- `ima`
      }
      if (!is.null(`regions`)) {
        stopifnot(is.vector(`regions`), length(`regions`) != 0)
        sapply(`regions`, function(x) stopifnot(R6::is.R6(x)))
        self$`regions` <- `regions`
      }
      if (!is.null(`asset_servers`)) {
        stopifnot(is.vector(`asset_servers`), length(`asset_servers`) != 0)
        sapply(`asset_servers`, function(x) stopifnot(R6::is.R6(x)))
        self$`asset_servers` <- `asset_servers`
      }
      if (!is.null(`buy_it_servers`)) {
        stopifnot(is.vector(`buy_it_servers`), length(`buy_it_servers`) != 0)
        sapply(`buy_it_servers`, function(x) stopifnot(is.character(x)))
        self$`buy_it_servers` <- `buy_it_servers`
      }
      if (!is.null(`display_showmore`)) {
        if (!(is.character(`display_showmore`) && length(`display_showmore`) == 1)) {
          stop(paste("Error! Invalid data for `display_showmore`. Must be a string:", `display_showmore`))
        }
        self$`display_showmore` <- `display_showmore`
      }
      if (!is.null(`cust_discount`)) {
        self$`cust_discount` <- `cust_discount`
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
    #' @return ServerOrderGetResponse as a base R list.
    #' @examples
    #' # convert array of ServerOrderGetResponse (x) to a data frame
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
    #' Convert ServerOrderGetResponse to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ServerOrderGetResponseObject <- list()
      if (!is.null(self$`form_values`)) {
        ServerOrderGetResponseObject[["form_values"]] <-
          self$extractSimpleType(self$`form_values`)
      }
      if (!is.null(self$`config_ids`)) {
        ServerOrderGetResponseObject[["config_ids"]] <-
          self$extractSimpleType(self$`config_ids`)
      }
      if (!is.null(self$`cpu`)) {
        ServerOrderGetResponseObject[["cpu"]] <-
          self$`cpu`
      }
      if (!is.null(self$`cpu_li`)) {
        ServerOrderGetResponseObject[["cpu_li"]] <-
          self$extractSimpleType(self$`cpu_li`)
      }
      if (!is.null(self$`config_li`)) {
        ServerOrderGetResponseObject[["config_li"]] <-
          self$extractSimpleType(self$`config_li`)
      }
      if (!is.null(self$`field_label`)) {
        ServerOrderGetResponseObject[["field_label"]] <-
          self$extractSimpleType(self$`field_label`)
      }
      if (!is.null(self$`cpu_cores`)) {
        ServerOrderGetResponseObject[["cpu_cores"]] <-
          self$extractSimpleType(self$`cpu_cores`)
      }
      if (!is.null(self$`frequency`)) {
        ServerOrderGetResponseObject[["frequency"]] <-
          self$`frequency`
      }
      if (!is.null(self$`currency`)) {
        ServerOrderGetResponseObject[["currency"]] <-
          self$`currency`
      }
      if (!is.null(self$`currencySymbol`)) {
        ServerOrderGetResponseObject[["currencySymbol"]] <-
          self$`currencySymbol`
      }
      if (!is.null(self$`country`)) {
        ServerOrderGetResponseObject[["country"]] <-
          self$`country`
      }
      if (!is.null(self$`custid`)) {
        ServerOrderGetResponseObject[["custid"]] <-
          self$`custid`
      }
      if (!is.null(self$`ima`)) {
        ServerOrderGetResponseObject[["ima"]] <-
          self$`ima`
      }
      if (!is.null(self$`step`)) {
        ServerOrderGetResponseObject[["step"]] <-
          self$`step`
      }
      if (!is.null(self$`regions`)) {
        ServerOrderGetResponseObject[["regions"]] <-
          self$extractSimpleType(self$`regions`)
      }
      if (!is.null(self$`asset_servers`)) {
        ServerOrderGetResponseObject[["asset_servers"]] <-
          self$extractSimpleType(self$`asset_servers`)
      }
      if (!is.null(self$`buy_it_servers`)) {
        ServerOrderGetResponseObject[["buy_it_servers"]] <-
          self$`buy_it_servers`
      }
      if (!is.null(self$`display_showmore`)) {
        ServerOrderGetResponseObject[["display_showmore"]] <-
          self$`display_showmore`
      }
      if (!is.null(self$`cust_discount`)) {
        ServerOrderGetResponseObject[["cust_discount"]] <-
          self$`cust_discount`
      }
      return(ServerOrderGetResponseObject)
    },

    extractSimpleType = function(x) {
      if (R6::is.R6(x)) {
        return(x$toSimpleType())
      } else if (!self$hasNestedR6(x)) {
        return(x)
      }
      lapply(x, self$extractSimpleType)
    },

    hasNestedR6 = function(x) {
      if (R6::is.R6(x)) {
        return(TRUE)
      }
      if (is.list(x)) {
        for (item in x) {
          if (self$hasNestedR6(item)) {
            return(TRUE)
          }
        }
      }
      FALSE
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerOrderGetResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerOrderGetResponse
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`form_values`)) {
        `form_values_object` <- FormValues$new()
        `form_values_object`$fromJSON(jsonlite::toJSON(this_object$`form_values`, auto_unbox = TRUE, digits = NA))
        self$`form_values` <- `form_values_object`
      }
      if (!is.null(this_object$`config_ids`)) {
        `config_ids_object` <- ConfigIds$new()
        `config_ids_object`$fromJSON(jsonlite::toJSON(this_object$`config_ids`, auto_unbox = TRUE, digits = NA))
        self$`config_ids` <- `config_ids_object`
      }
      if (!is.null(this_object$`cpu`)) {
        self$`cpu` <- this_object$`cpu`
      }
      if (!is.null(this_object$`cpu_li`)) {
        self$`cpu_li` <- ApiClient$new()$deserializeObj(this_object$`cpu_li`, "map(Cpu)", loadNamespace("openapi"))
      }
      if (!is.null(this_object$`config_li`)) {
        `config_li_object` <- ConfigLists$new()
        `config_li_object`$fromJSON(jsonlite::toJSON(this_object$`config_li`, auto_unbox = TRUE, digits = NA))
        self$`config_li` <- `config_li_object`
      }
      if (!is.null(this_object$`field_label`)) {
        self$`field_label` <- ApiClient$new()$deserializeObj(this_object$`field_label`, "map(FieldLabel)", loadNamespace("openapi"))
      }
      if (!is.null(this_object$`cpu_cores`)) {
        self$`cpu_cores` <- ApiClient$new()$deserializeObj(this_object$`cpu_cores`, "map(map(CpuWithDefaults))", loadNamespace("openapi"))
      }
      if (!is.null(this_object$`frequency`)) {
        self$`frequency` <- this_object$`frequency`
      }
      if (!is.null(this_object$`currency`)) {
        self$`currency` <- this_object$`currency`
      }
      if (!is.null(this_object$`currencySymbol`)) {
        self$`currencySymbol` <- this_object$`currencySymbol`
      }
      if (!is.null(this_object$`country`)) {
        self$`country` <- this_object$`country`
      }
      if (!is.null(this_object$`custid`)) {
        self$`custid` <- this_object$`custid`
      }
      if (!is.null(this_object$`ima`)) {
        self$`ima` <- this_object$`ima`
      }
      if (!is.null(this_object$`step`)) {
        self$`step` <- this_object$`step`
      }
      if (!is.null(this_object$`regions`)) {
        self$`regions` <- ApiClient$new()$deserializeObj(this_object$`regions`, "array[Region]", loadNamespace("openapi"))
      }
      if (!is.null(this_object$`asset_servers`)) {
        self$`asset_servers` <- ApiClient$new()$deserializeObj(this_object$`asset_servers`, "array[AssetServer]", loadNamespace("openapi"))
      }
      if (!is.null(this_object$`buy_it_servers`)) {
        self$`buy_it_servers` <- ApiClient$new()$deserializeObj(this_object$`buy_it_servers`, "array[object]", loadNamespace("openapi"))
      }
      if (!is.null(this_object$`display_showmore`)) {
        self$`display_showmore` <- this_object$`display_showmore`
      }
      if (!is.null(this_object$`cust_discount`)) {
        self$`cust_discount` <- this_object$`cust_discount`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ServerOrderGetResponse in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerOrderGetResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerOrderGetResponse
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`form_values` <- FormValues$new()$fromJSON(jsonlite::toJSON(this_object$`form_values`, auto_unbox = TRUE, digits = NA))
      self$`config_ids` <- ConfigIds$new()$fromJSON(jsonlite::toJSON(this_object$`config_ids`, auto_unbox = TRUE, digits = NA))
      self$`cpu` <- this_object$`cpu`
      self$`cpu_li` <- ApiClient$new()$deserializeObj(this_object$`cpu_li`, "map(Cpu)", loadNamespace("openapi"))
      self$`config_li` <- ConfigLists$new()$fromJSON(jsonlite::toJSON(this_object$`config_li`, auto_unbox = TRUE, digits = NA))
      self$`field_label` <- ApiClient$new()$deserializeObj(this_object$`field_label`, "map(FieldLabel)", loadNamespace("openapi"))
      self$`cpu_cores` <- ApiClient$new()$deserializeObj(this_object$`cpu_cores`, "map(map(CpuWithDefaults))", loadNamespace("openapi"))
      self$`frequency` <- this_object$`frequency`
      self$`currency` <- this_object$`currency`
      self$`currencySymbol` <- this_object$`currencySymbol`
      self$`country` <- this_object$`country`
      self$`custid` <- this_object$`custid`
      self$`ima` <- this_object$`ima`
      self$`step` <- this_object$`step`
      self$`regions` <- ApiClient$new()$deserializeObj(this_object$`regions`, "array[Region]", loadNamespace("openapi"))
      self$`asset_servers` <- ApiClient$new()$deserializeObj(this_object$`asset_servers`, "array[AssetServer]", loadNamespace("openapi"))
      self$`buy_it_servers` <- ApiClient$new()$deserializeObj(this_object$`buy_it_servers`, "array[object]", loadNamespace("openapi"))
      self$`display_showmore` <- this_object$`display_showmore`
      self$`cust_discount` <- this_object$`cust_discount`
      self
    },

    #' @description
    #' Validate JSON input with respect to ServerOrderGetResponse and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `form_values`
      if (!is.null(input_json$`form_values`)) {
        stopifnot(R6::is.R6(input_json$`form_values`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServerOrderGetResponse: the required field `form_values` is missing."))
      }
      # check the required field `config_ids`
      if (!is.null(input_json$`config_ids`)) {
        stopifnot(R6::is.R6(input_json$`config_ids`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServerOrderGetResponse: the required field `config_ids` is missing."))
      }
      # check the required field `cpu`
      if (!is.null(input_json$`cpu`)) {
        if (!(is.numeric(input_json$`cpu`) && length(input_json$`cpu`) == 1)) {
          stop(paste("Error! Invalid data for `cpu`. Must be an integer:", input_json$`cpu`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServerOrderGetResponse: the required field `cpu` is missing."))
      }
      # check the required field `cpu_li`
      if (!is.null(input_json$`cpu_li`)) {
        stopifnot(is.vector(input_json$`cpu_li`), length(input_json$`cpu_li`) != 0)
        tmp <- sapply(input_json$`cpu_li`, function(x) stopifnot(R6::is.R6(x)))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServerOrderGetResponse: the required field `cpu_li` is missing."))
      }
      # check the required field `config_li`
      if (!is.null(input_json$`config_li`)) {
        stopifnot(R6::is.R6(input_json$`config_li`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServerOrderGetResponse: the required field `config_li` is missing."))
      }
      # check the required field `frequency`
      if (!is.null(input_json$`frequency`)) {
        if (!(is.numeric(input_json$`frequency`) && length(input_json$`frequency`) == 1)) {
          stop(paste("Error! Invalid data for `frequency`. Must be an integer:", input_json$`frequency`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServerOrderGetResponse: the required field `frequency` is missing."))
      }
      # check the required field `currency`
      if (!is.null(input_json$`currency`)) {
        if (!(is.character(input_json$`currency`) && length(input_json$`currency`) == 1)) {
          stop(paste("Error! Invalid data for `currency`. Must be a string:", input_json$`currency`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServerOrderGetResponse: the required field `currency` is missing."))
      }
      # check the required field `country`
      if (!is.null(input_json$`country`)) {
        if (!(is.character(input_json$`country`) && length(input_json$`country`) == 1)) {
          stop(paste("Error! Invalid data for `country`. Must be a string:", input_json$`country`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServerOrderGetResponse: the required field `country` is missing."))
      }
      # check the required field `step`
      if (!is.null(input_json$`step`)) {
        if (!(is.character(input_json$`step`) && length(input_json$`step`) == 1)) {
          stop(paste("Error! Invalid data for `step`. Must be a string:", input_json$`step`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServerOrderGetResponse: the required field `step` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ServerOrderGetResponse
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `form_values` is null
      if (is.null(self$`form_values`)) {
        return(FALSE)
      }

      # check if the required `config_ids` is null
      if (is.null(self$`config_ids`)) {
        return(FALSE)
      }

      # check if the required `cpu` is null
      if (is.null(self$`cpu`)) {
        return(FALSE)
      }

      # check if the required `cpu_li` is null
      if (is.null(self$`cpu_li`)) {
        return(FALSE)
      }

      # check if the required `config_li` is null
      if (is.null(self$`config_li`)) {
        return(FALSE)
      }

      # check if the required `frequency` is null
      if (is.null(self$`frequency`)) {
        return(FALSE)
      }

      # check if the required `currency` is null
      if (is.null(self$`currency`)) {
        return(FALSE)
      }

      # check if the required `country` is null
      if (is.null(self$`country`)) {
        return(FALSE)
      }

      # check if the required `step` is null
      if (is.null(self$`step`)) {
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
      # check if the required `form_values` is null
      if (is.null(self$`form_values`)) {
        invalid_fields["form_values"] <- "Non-nullable required field `form_values` cannot be null."
      }

      # check if the required `config_ids` is null
      if (is.null(self$`config_ids`)) {
        invalid_fields["config_ids"] <- "Non-nullable required field `config_ids` cannot be null."
      }

      # check if the required `cpu` is null
      if (is.null(self$`cpu`)) {
        invalid_fields["cpu"] <- "Non-nullable required field `cpu` cannot be null."
      }

      # check if the required `cpu_li` is null
      if (is.null(self$`cpu_li`)) {
        invalid_fields["cpu_li"] <- "Non-nullable required field `cpu_li` cannot be null."
      }

      # check if the required `config_li` is null
      if (is.null(self$`config_li`)) {
        invalid_fields["config_li"] <- "Non-nullable required field `config_li` cannot be null."
      }

      # check if the required `frequency` is null
      if (is.null(self$`frequency`)) {
        invalid_fields["frequency"] <- "Non-nullable required field `frequency` cannot be null."
      }

      # check if the required `currency` is null
      if (is.null(self$`currency`)) {
        invalid_fields["currency"] <- "Non-nullable required field `currency` cannot be null."
      }

      # check if the required `country` is null
      if (is.null(self$`country`)) {
        invalid_fields["country"] <- "Non-nullable required field `country` cannot be null."
      }

      # check if the required `step` is null
      if (is.null(self$`step`)) {
        invalid_fields["step"] <- "Non-nullable required field `step` cannot be null."
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
# ServerOrderGetResponse$unlock()
#
## Below is an example to define the print function
# ServerOrderGetResponse$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ServerOrderGetResponse$lock()

