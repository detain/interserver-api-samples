#' Create a new ServerOrderCPU
#'
#' @description
#' A CPU option available when ordering a dedicated server.
#'
#' @docType class
#' @title ServerOrderCPU
#' @description ServerOrderCPU Class
#' @format An \code{R6Class} generator object
#' @field id CPU ID. character [optional]
#' @field price CPU price. integer [optional]
#' @field img CPU image. character [optional]
#' @field short_desc Short description of the CPU. character [optional]
#' @field long_desc Long description of the CPU. character [optional]
#' @field location Location of the CPU. character [optional]
#' @field fsb Front Side Bus information. character [optional]
#' @field manu Manufacturer information. character [optional]
#' @field type CPU type. character [optional]
#' @field speed CPU speed. character [optional]
#' @field cache Cache information. character [optional]
#' @field active Active status. character [optional]
#' @field num_cores Number of cores. character [optional]
#' @field num_cpus Number of CPUs. character [optional]
#' @field benchmark CPU benchmark. character [optional]
#' @field monthly_price Monthly price. integer [optional]
#' @field max_ram Maximum RAM supported. character [optional]
#' @field min_ram Minimum RAM required. character [optional]
#' @field max_lff Maximum LFF (Large Form Factor) supported. character [optional]
#' @field max_sff Maximum SFF (Small Form Factor) supported. character [optional]
#' @field max_nve Maximum NVMe drives supported. character [optional]
#' @field visible Visibility status. character [optional]
#' @field hd_ids Hard drive IDs. \link{AnyType} [optional]
#' @field price_display Display of CPU price. character [optional]
#' @field monthly_price_display Display of monthly CPU price. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ServerOrderCPU <- R6::R6Class(
  "ServerOrderCPU",
  public = list(
    `id` = NULL,
    `price` = NULL,
    `img` = NULL,
    `short_desc` = NULL,
    `long_desc` = NULL,
    `location` = NULL,
    `fsb` = NULL,
    `manu` = NULL,
    `type` = NULL,
    `speed` = NULL,
    `cache` = NULL,
    `active` = NULL,
    `num_cores` = NULL,
    `num_cpus` = NULL,
    `benchmark` = NULL,
    `monthly_price` = NULL,
    `max_ram` = NULL,
    `min_ram` = NULL,
    `max_lff` = NULL,
    `max_sff` = NULL,
    `max_nve` = NULL,
    `visible` = NULL,
    `hd_ids` = NULL,
    `price_display` = NULL,
    `monthly_price_display` = NULL,

    #' @description
    #' Initialize a new ServerOrderCPU class.
    #'
    #' @param id CPU ID.
    #' @param price CPU price.
    #' @param img CPU image.
    #' @param short_desc Short description of the CPU.
    #' @param long_desc Long description of the CPU.
    #' @param location Location of the CPU.
    #' @param fsb Front Side Bus information.
    #' @param manu Manufacturer information.
    #' @param type CPU type.
    #' @param speed CPU speed.
    #' @param cache Cache information.
    #' @param active Active status.
    #' @param num_cores Number of cores.
    #' @param num_cpus Number of CPUs.
    #' @param benchmark CPU benchmark.
    #' @param monthly_price Monthly price.
    #' @param max_ram Maximum RAM supported.
    #' @param min_ram Minimum RAM required.
    #' @param max_lff Maximum LFF (Large Form Factor) supported.
    #' @param max_sff Maximum SFF (Small Form Factor) supported.
    #' @param max_nve Maximum NVMe drives supported.
    #' @param visible Visibility status.
    #' @param hd_ids Hard drive IDs.
    #' @param price_display Display of CPU price.
    #' @param monthly_price_display Display of monthly CPU price.
    #' @param ... Other optional arguments.
    initialize = function(`id` = NULL, `price` = NULL, `img` = NULL, `short_desc` = NULL, `long_desc` = NULL, `location` = NULL, `fsb` = NULL, `manu` = NULL, `type` = NULL, `speed` = NULL, `cache` = NULL, `active` = NULL, `num_cores` = NULL, `num_cpus` = NULL, `benchmark` = NULL, `monthly_price` = NULL, `max_ram` = NULL, `min_ram` = NULL, `max_lff` = NULL, `max_sff` = NULL, `max_nve` = NULL, `visible` = NULL, `hd_ids` = NULL, `price_display` = NULL, `monthly_price_display` = NULL, ...) {
      if (!is.null(`id`)) {
        if (!(is.character(`id`) && length(`id`) == 1)) {
          stop(paste("Error! Invalid data for `id`. Must be a string:", `id`))
        }
        self$`id` <- `id`
      }
      if (!is.null(`price`)) {
        if (!(is.numeric(`price`) && length(`price`) == 1)) {
          stop(paste("Error! Invalid data for `price`. Must be an integer:", `price`))
        }
        self$`price` <- `price`
      }
      if (!is.null(`img`)) {
        if (!(is.character(`img`) && length(`img`) == 1)) {
          stop(paste("Error! Invalid data for `img`. Must be a string:", `img`))
        }
        self$`img` <- `img`
      }
      if (!is.null(`short_desc`)) {
        if (!(is.character(`short_desc`) && length(`short_desc`) == 1)) {
          stop(paste("Error! Invalid data for `short_desc`. Must be a string:", `short_desc`))
        }
        self$`short_desc` <- `short_desc`
      }
      if (!is.null(`long_desc`)) {
        if (!(is.character(`long_desc`) && length(`long_desc`) == 1)) {
          stop(paste("Error! Invalid data for `long_desc`. Must be a string:", `long_desc`))
        }
        self$`long_desc` <- `long_desc`
      }
      if (!is.null(`location`)) {
        if (!(is.character(`location`) && length(`location`) == 1)) {
          stop(paste("Error! Invalid data for `location`. Must be a string:", `location`))
        }
        self$`location` <- `location`
      }
      if (!is.null(`fsb`)) {
        if (!(is.character(`fsb`) && length(`fsb`) == 1)) {
          stop(paste("Error! Invalid data for `fsb`. Must be a string:", `fsb`))
        }
        self$`fsb` <- `fsb`
      }
      if (!is.null(`manu`)) {
        if (!(is.character(`manu`) && length(`manu`) == 1)) {
          stop(paste("Error! Invalid data for `manu`. Must be a string:", `manu`))
        }
        self$`manu` <- `manu`
      }
      if (!is.null(`type`)) {
        if (!(is.character(`type`) && length(`type`) == 1)) {
          stop(paste("Error! Invalid data for `type`. Must be a string:", `type`))
        }
        self$`type` <- `type`
      }
      if (!is.null(`speed`)) {
        if (!(is.character(`speed`) && length(`speed`) == 1)) {
          stop(paste("Error! Invalid data for `speed`. Must be a string:", `speed`))
        }
        self$`speed` <- `speed`
      }
      if (!is.null(`cache`)) {
        if (!(is.character(`cache`) && length(`cache`) == 1)) {
          stop(paste("Error! Invalid data for `cache`. Must be a string:", `cache`))
        }
        self$`cache` <- `cache`
      }
      if (!is.null(`active`)) {
        if (!(is.character(`active`) && length(`active`) == 1)) {
          stop(paste("Error! Invalid data for `active`. Must be a string:", `active`))
        }
        self$`active` <- `active`
      }
      if (!is.null(`num_cores`)) {
        if (!(is.character(`num_cores`) && length(`num_cores`) == 1)) {
          stop(paste("Error! Invalid data for `num_cores`. Must be a string:", `num_cores`))
        }
        self$`num_cores` <- `num_cores`
      }
      if (!is.null(`num_cpus`)) {
        if (!(is.character(`num_cpus`) && length(`num_cpus`) == 1)) {
          stop(paste("Error! Invalid data for `num_cpus`. Must be a string:", `num_cpus`))
        }
        self$`num_cpus` <- `num_cpus`
      }
      if (!is.null(`benchmark`)) {
        if (!(is.character(`benchmark`) && length(`benchmark`) == 1)) {
          stop(paste("Error! Invalid data for `benchmark`. Must be a string:", `benchmark`))
        }
        self$`benchmark` <- `benchmark`
      }
      if (!is.null(`monthly_price`)) {
        if (!(is.numeric(`monthly_price`) && length(`monthly_price`) == 1)) {
          stop(paste("Error! Invalid data for `monthly_price`. Must be an integer:", `monthly_price`))
        }
        self$`monthly_price` <- `monthly_price`
      }
      if (!is.null(`max_ram`)) {
        if (!(is.character(`max_ram`) && length(`max_ram`) == 1)) {
          stop(paste("Error! Invalid data for `max_ram`. Must be a string:", `max_ram`))
        }
        self$`max_ram` <- `max_ram`
      }
      if (!is.null(`min_ram`)) {
        if (!(is.character(`min_ram`) && length(`min_ram`) == 1)) {
          stop(paste("Error! Invalid data for `min_ram`. Must be a string:", `min_ram`))
        }
        self$`min_ram` <- `min_ram`
      }
      if (!is.null(`max_lff`)) {
        if (!(is.character(`max_lff`) && length(`max_lff`) == 1)) {
          stop(paste("Error! Invalid data for `max_lff`. Must be a string:", `max_lff`))
        }
        self$`max_lff` <- `max_lff`
      }
      if (!is.null(`max_sff`)) {
        if (!(is.character(`max_sff`) && length(`max_sff`) == 1)) {
          stop(paste("Error! Invalid data for `max_sff`. Must be a string:", `max_sff`))
        }
        self$`max_sff` <- `max_sff`
      }
      if (!is.null(`max_nve`)) {
        if (!(is.character(`max_nve`) && length(`max_nve`) == 1)) {
          stop(paste("Error! Invalid data for `max_nve`. Must be a string:", `max_nve`))
        }
        self$`max_nve` <- `max_nve`
      }
      if (!is.null(`visible`)) {
        if (!(is.character(`visible`) && length(`visible`) == 1)) {
          stop(paste("Error! Invalid data for `visible`. Must be a string:", `visible`))
        }
        self$`visible` <- `visible`
      }
      if (!is.null(`hd_ids`)) {
        stopifnot(R6::is.R6(`hd_ids`))
        self$`hd_ids` <- `hd_ids`
      }
      if (!is.null(`price_display`)) {
        if (!(is.character(`price_display`) && length(`price_display`) == 1)) {
          stop(paste("Error! Invalid data for `price_display`. Must be a string:", `price_display`))
        }
        self$`price_display` <- `price_display`
      }
      if (!is.null(`monthly_price_display`)) {
        if (!(is.character(`monthly_price_display`) && length(`monthly_price_display`) == 1)) {
          stop(paste("Error! Invalid data for `monthly_price_display`. Must be a string:", `monthly_price_display`))
        }
        self$`monthly_price_display` <- `monthly_price_display`
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
    #' @return ServerOrderCPU as a base R list.
    #' @examples
    #' # convert array of ServerOrderCPU (x) to a data frame
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
    #' Convert ServerOrderCPU to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ServerOrderCPUObject <- list()
      if (!is.null(self$`id`)) {
        ServerOrderCPUObject[["id"]] <-
          self$`id`
      }
      if (!is.null(self$`price`)) {
        ServerOrderCPUObject[["price"]] <-
          self$`price`
      }
      if (!is.null(self$`img`)) {
        ServerOrderCPUObject[["img"]] <-
          self$`img`
      }
      if (!is.null(self$`short_desc`)) {
        ServerOrderCPUObject[["short_desc"]] <-
          self$`short_desc`
      }
      if (!is.null(self$`long_desc`)) {
        ServerOrderCPUObject[["long_desc"]] <-
          self$`long_desc`
      }
      if (!is.null(self$`location`)) {
        ServerOrderCPUObject[["location"]] <-
          self$`location`
      }
      if (!is.null(self$`fsb`)) {
        ServerOrderCPUObject[["fsb"]] <-
          self$`fsb`
      }
      if (!is.null(self$`manu`)) {
        ServerOrderCPUObject[["manu"]] <-
          self$`manu`
      }
      if (!is.null(self$`type`)) {
        ServerOrderCPUObject[["type"]] <-
          self$`type`
      }
      if (!is.null(self$`speed`)) {
        ServerOrderCPUObject[["speed"]] <-
          self$`speed`
      }
      if (!is.null(self$`cache`)) {
        ServerOrderCPUObject[["cache"]] <-
          self$`cache`
      }
      if (!is.null(self$`active`)) {
        ServerOrderCPUObject[["active"]] <-
          self$`active`
      }
      if (!is.null(self$`num_cores`)) {
        ServerOrderCPUObject[["num_cores"]] <-
          self$`num_cores`
      }
      if (!is.null(self$`num_cpus`)) {
        ServerOrderCPUObject[["num_cpus"]] <-
          self$`num_cpus`
      }
      if (!is.null(self$`benchmark`)) {
        ServerOrderCPUObject[["benchmark"]] <-
          self$`benchmark`
      }
      if (!is.null(self$`monthly_price`)) {
        ServerOrderCPUObject[["monthly_price"]] <-
          self$`monthly_price`
      }
      if (!is.null(self$`max_ram`)) {
        ServerOrderCPUObject[["max_ram"]] <-
          self$`max_ram`
      }
      if (!is.null(self$`min_ram`)) {
        ServerOrderCPUObject[["min_ram"]] <-
          self$`min_ram`
      }
      if (!is.null(self$`max_lff`)) {
        ServerOrderCPUObject[["max_lff"]] <-
          self$`max_lff`
      }
      if (!is.null(self$`max_sff`)) {
        ServerOrderCPUObject[["max_sff"]] <-
          self$`max_sff`
      }
      if (!is.null(self$`max_nve`)) {
        ServerOrderCPUObject[["max_nve"]] <-
          self$`max_nve`
      }
      if (!is.null(self$`visible`)) {
        ServerOrderCPUObject[["visible"]] <-
          self$`visible`
      }
      if (!is.null(self$`hd_ids`)) {
        ServerOrderCPUObject[["hd_ids"]] <-
          self$extractSimpleType(self$`hd_ids`)
      }
      if (!is.null(self$`price_display`)) {
        ServerOrderCPUObject[["price_display"]] <-
          self$`price_display`
      }
      if (!is.null(self$`monthly_price_display`)) {
        ServerOrderCPUObject[["monthly_price_display"]] <-
          self$`monthly_price_display`
      }
      return(ServerOrderCPUObject)
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
    #' Deserialize JSON string into an instance of ServerOrderCPU
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerOrderCPU
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`id`)) {
        self$`id` <- this_object$`id`
      }
      if (!is.null(this_object$`price`)) {
        self$`price` <- this_object$`price`
      }
      if (!is.null(this_object$`img`)) {
        self$`img` <- this_object$`img`
      }
      if (!is.null(this_object$`short_desc`)) {
        self$`short_desc` <- this_object$`short_desc`
      }
      if (!is.null(this_object$`long_desc`)) {
        self$`long_desc` <- this_object$`long_desc`
      }
      if (!is.null(this_object$`location`)) {
        self$`location` <- this_object$`location`
      }
      if (!is.null(this_object$`fsb`)) {
        self$`fsb` <- this_object$`fsb`
      }
      if (!is.null(this_object$`manu`)) {
        self$`manu` <- this_object$`manu`
      }
      if (!is.null(this_object$`type`)) {
        self$`type` <- this_object$`type`
      }
      if (!is.null(this_object$`speed`)) {
        self$`speed` <- this_object$`speed`
      }
      if (!is.null(this_object$`cache`)) {
        self$`cache` <- this_object$`cache`
      }
      if (!is.null(this_object$`active`)) {
        self$`active` <- this_object$`active`
      }
      if (!is.null(this_object$`num_cores`)) {
        self$`num_cores` <- this_object$`num_cores`
      }
      if (!is.null(this_object$`num_cpus`)) {
        self$`num_cpus` <- this_object$`num_cpus`
      }
      if (!is.null(this_object$`benchmark`)) {
        self$`benchmark` <- this_object$`benchmark`
      }
      if (!is.null(this_object$`monthly_price`)) {
        self$`monthly_price` <- this_object$`monthly_price`
      }
      if (!is.null(this_object$`max_ram`)) {
        self$`max_ram` <- this_object$`max_ram`
      }
      if (!is.null(this_object$`min_ram`)) {
        self$`min_ram` <- this_object$`min_ram`
      }
      if (!is.null(this_object$`max_lff`)) {
        self$`max_lff` <- this_object$`max_lff`
      }
      if (!is.null(this_object$`max_sff`)) {
        self$`max_sff` <- this_object$`max_sff`
      }
      if (!is.null(this_object$`max_nve`)) {
        self$`max_nve` <- this_object$`max_nve`
      }
      if (!is.null(this_object$`visible`)) {
        self$`visible` <- this_object$`visible`
      }
      if (!is.null(this_object$`hd_ids`)) {
        `hd_ids_object` <- AnyType$new()
        `hd_ids_object`$fromJSON(jsonlite::toJSON(this_object$`hd_ids`, auto_unbox = TRUE, digits = NA))
        self$`hd_ids` <- `hd_ids_object`
      }
      if (!is.null(this_object$`price_display`)) {
        self$`price_display` <- this_object$`price_display`
      }
      if (!is.null(this_object$`monthly_price_display`)) {
        self$`monthly_price_display` <- this_object$`monthly_price_display`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ServerOrderCPU in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerOrderCPU
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerOrderCPU
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`id` <- this_object$`id`
      self$`price` <- this_object$`price`
      self$`img` <- this_object$`img`
      self$`short_desc` <- this_object$`short_desc`
      self$`long_desc` <- this_object$`long_desc`
      self$`location` <- this_object$`location`
      self$`fsb` <- this_object$`fsb`
      self$`manu` <- this_object$`manu`
      self$`type` <- this_object$`type`
      self$`speed` <- this_object$`speed`
      self$`cache` <- this_object$`cache`
      self$`active` <- this_object$`active`
      self$`num_cores` <- this_object$`num_cores`
      self$`num_cpus` <- this_object$`num_cpus`
      self$`benchmark` <- this_object$`benchmark`
      self$`monthly_price` <- this_object$`monthly_price`
      self$`max_ram` <- this_object$`max_ram`
      self$`min_ram` <- this_object$`min_ram`
      self$`max_lff` <- this_object$`max_lff`
      self$`max_sff` <- this_object$`max_sff`
      self$`max_nve` <- this_object$`max_nve`
      self$`visible` <- this_object$`visible`
      self$`hd_ids` <- AnyType$new()$fromJSON(jsonlite::toJSON(this_object$`hd_ids`, auto_unbox = TRUE, digits = NA))
      self$`price_display` <- this_object$`price_display`
      self$`monthly_price_display` <- this_object$`monthly_price_display`
      self
    },

    #' @description
    #' Validate JSON input with respect to ServerOrderCPU and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ServerOrderCPU
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
# ServerOrderCPU$unlock()
#
## Below is an example to define the print function
# ServerOrderCPU$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ServerOrderCPU$lock()

