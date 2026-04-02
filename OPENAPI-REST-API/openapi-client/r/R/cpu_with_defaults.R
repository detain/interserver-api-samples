#' Create a new CpuWithDefaults
#'
#' @description
#' CpuWithDefaults Class
#'
#' @docType class
#' @title CpuWithDefaults
#' @description CpuWithDefaults Class
#' @format An \code{R6Class} generator object
#' @field id  integer [optional]
#' @field short_desc  character [optional]
#' @field long_desc  character [optional]
#' @field type  character [optional]
#' @field speed  character [optional]
#' @field num_cores  character [optional]
#' @field num_cpus  character [optional]
#' @field benchmark  character [optional]
#' @field monthly_price  numeric [optional]
#' @field monthly_price_display  character [optional]
#' @field max_ram  character [optional]
#' @field min_ram  character [optional]
#' @field max_lff  character [optional]
#' @field max_sff  character [optional]
#' @field max_nve  character [optional]
#' @field visible  character [optional]
#' @field active  character [optional]
#' @field memory_det  \link{MemoryOption} [optional]
#' @field hd_det  \link{HardDrive} [optional]
#' @field monthly_fee  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
CpuWithDefaults <- R6::R6Class(
  "CpuWithDefaults",
  public = list(
    `id` = NULL,
    `short_desc` = NULL,
    `long_desc` = NULL,
    `type` = NULL,
    `speed` = NULL,
    `num_cores` = NULL,
    `num_cpus` = NULL,
    `benchmark` = NULL,
    `monthly_price` = NULL,
    `monthly_price_display` = NULL,
    `max_ram` = NULL,
    `min_ram` = NULL,
    `max_lff` = NULL,
    `max_sff` = NULL,
    `max_nve` = NULL,
    `visible` = NULL,
    `active` = NULL,
    `memory_det` = NULL,
    `hd_det` = NULL,
    `monthly_fee` = NULL,

    #' @description
    #' Initialize a new CpuWithDefaults class.
    #'
    #' @param id id
    #' @param short_desc short_desc
    #' @param long_desc long_desc
    #' @param type type
    #' @param speed speed
    #' @param num_cores num_cores
    #' @param num_cpus num_cpus
    #' @param benchmark benchmark
    #' @param monthly_price monthly_price
    #' @param monthly_price_display monthly_price_display
    #' @param max_ram max_ram
    #' @param min_ram min_ram
    #' @param max_lff max_lff
    #' @param max_sff max_sff
    #' @param max_nve max_nve
    #' @param visible visible
    #' @param active active
    #' @param memory_det memory_det
    #' @param hd_det hd_det
    #' @param monthly_fee monthly_fee
    #' @param ... Other optional arguments.
    initialize = function(`id` = NULL, `short_desc` = NULL, `long_desc` = NULL, `type` = NULL, `speed` = NULL, `num_cores` = NULL, `num_cpus` = NULL, `benchmark` = NULL, `monthly_price` = NULL, `monthly_price_display` = NULL, `max_ram` = NULL, `min_ram` = NULL, `max_lff` = NULL, `max_sff` = NULL, `max_nve` = NULL, `visible` = NULL, `active` = NULL, `memory_det` = NULL, `hd_det` = NULL, `monthly_fee` = NULL, ...) {
      if (!is.null(`id`)) {
        if (!(is.numeric(`id`) && length(`id`) == 1)) {
          stop(paste("Error! Invalid data for `id`. Must be an integer:", `id`))
        }
        self$`id` <- `id`
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
        self$`monthly_price` <- `monthly_price`
      }
      if (!is.null(`monthly_price_display`)) {
        if (!(is.character(`monthly_price_display`) && length(`monthly_price_display`) == 1)) {
          stop(paste("Error! Invalid data for `monthly_price_display`. Must be a string:", `monthly_price_display`))
        }
        self$`monthly_price_display` <- `monthly_price_display`
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
      if (!is.null(`active`)) {
        if (!(is.character(`active`) && length(`active`) == 1)) {
          stop(paste("Error! Invalid data for `active`. Must be a string:", `active`))
        }
        self$`active` <- `active`
      }
      if (!is.null(`memory_det`)) {
        stopifnot(R6::is.R6(`memory_det`))
        self$`memory_det` <- `memory_det`
      }
      if (!is.null(`hd_det`)) {
        stopifnot(R6::is.R6(`hd_det`))
        self$`hd_det` <- `hd_det`
      }
      if (!is.null(`monthly_fee`)) {
        if (!(is.character(`monthly_fee`) && length(`monthly_fee`) == 1)) {
          stop(paste("Error! Invalid data for `monthly_fee`. Must be a string:", `monthly_fee`))
        }
        self$`monthly_fee` <- `monthly_fee`
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
    #' @return CpuWithDefaults as a base R list.
    #' @examples
    #' # convert array of CpuWithDefaults (x) to a data frame
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
    #' Convert CpuWithDefaults to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      CpuWithDefaultsObject <- list()
      if (!is.null(self$`id`)) {
        CpuWithDefaultsObject[["id"]] <-
          self$`id`
      }
      if (!is.null(self$`short_desc`)) {
        CpuWithDefaultsObject[["short_desc"]] <-
          self$`short_desc`
      }
      if (!is.null(self$`long_desc`)) {
        CpuWithDefaultsObject[["long_desc"]] <-
          self$`long_desc`
      }
      if (!is.null(self$`type`)) {
        CpuWithDefaultsObject[["type"]] <-
          self$`type`
      }
      if (!is.null(self$`speed`)) {
        CpuWithDefaultsObject[["speed"]] <-
          self$`speed`
      }
      if (!is.null(self$`num_cores`)) {
        CpuWithDefaultsObject[["num_cores"]] <-
          self$`num_cores`
      }
      if (!is.null(self$`num_cpus`)) {
        CpuWithDefaultsObject[["num_cpus"]] <-
          self$`num_cpus`
      }
      if (!is.null(self$`benchmark`)) {
        CpuWithDefaultsObject[["benchmark"]] <-
          self$`benchmark`
      }
      if (!is.null(self$`monthly_price`)) {
        CpuWithDefaultsObject[["monthly_price"]] <-
          self$`monthly_price`
      }
      if (!is.null(self$`monthly_price_display`)) {
        CpuWithDefaultsObject[["monthly_price_display"]] <-
          self$`monthly_price_display`
      }
      if (!is.null(self$`max_ram`)) {
        CpuWithDefaultsObject[["max_ram"]] <-
          self$`max_ram`
      }
      if (!is.null(self$`min_ram`)) {
        CpuWithDefaultsObject[["min_ram"]] <-
          self$`min_ram`
      }
      if (!is.null(self$`max_lff`)) {
        CpuWithDefaultsObject[["max_lff"]] <-
          self$`max_lff`
      }
      if (!is.null(self$`max_sff`)) {
        CpuWithDefaultsObject[["max_sff"]] <-
          self$`max_sff`
      }
      if (!is.null(self$`max_nve`)) {
        CpuWithDefaultsObject[["max_nve"]] <-
          self$`max_nve`
      }
      if (!is.null(self$`visible`)) {
        CpuWithDefaultsObject[["visible"]] <-
          self$`visible`
      }
      if (!is.null(self$`active`)) {
        CpuWithDefaultsObject[["active"]] <-
          self$`active`
      }
      if (!is.null(self$`memory_det`)) {
        CpuWithDefaultsObject[["memory_det"]] <-
          self$extractSimpleType(self$`memory_det`)
      }
      if (!is.null(self$`hd_det`)) {
        CpuWithDefaultsObject[["hd_det"]] <-
          self$extractSimpleType(self$`hd_det`)
      }
      if (!is.null(self$`monthly_fee`)) {
        CpuWithDefaultsObject[["monthly_fee"]] <-
          self$`monthly_fee`
      }
      return(CpuWithDefaultsObject)
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
    #' Deserialize JSON string into an instance of CpuWithDefaults
    #'
    #' @param input_json the JSON input
    #' @return the instance of CpuWithDefaults
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`id`)) {
        self$`id` <- this_object$`id`
      }
      if (!is.null(this_object$`short_desc`)) {
        self$`short_desc` <- this_object$`short_desc`
      }
      if (!is.null(this_object$`long_desc`)) {
        self$`long_desc` <- this_object$`long_desc`
      }
      if (!is.null(this_object$`type`)) {
        self$`type` <- this_object$`type`
      }
      if (!is.null(this_object$`speed`)) {
        self$`speed` <- this_object$`speed`
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
      if (!is.null(this_object$`monthly_price_display`)) {
        self$`monthly_price_display` <- this_object$`monthly_price_display`
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
      if (!is.null(this_object$`active`)) {
        self$`active` <- this_object$`active`
      }
      if (!is.null(this_object$`memory_det`)) {
        `memory_det_object` <- MemoryOption$new()
        `memory_det_object`$fromJSON(jsonlite::toJSON(this_object$`memory_det`, auto_unbox = TRUE, digits = NA))
        self$`memory_det` <- `memory_det_object`
      }
      if (!is.null(this_object$`hd_det`)) {
        `hd_det_object` <- HardDrive$new()
        `hd_det_object`$fromJSON(jsonlite::toJSON(this_object$`hd_det`, auto_unbox = TRUE, digits = NA))
        self$`hd_det` <- `hd_det_object`
      }
      if (!is.null(this_object$`monthly_fee`)) {
        self$`monthly_fee` <- this_object$`monthly_fee`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return CpuWithDefaults in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of CpuWithDefaults
    #'
    #' @param input_json the JSON input
    #' @return the instance of CpuWithDefaults
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`id` <- this_object$`id`
      self$`short_desc` <- this_object$`short_desc`
      self$`long_desc` <- this_object$`long_desc`
      self$`type` <- this_object$`type`
      self$`speed` <- this_object$`speed`
      self$`num_cores` <- this_object$`num_cores`
      self$`num_cpus` <- this_object$`num_cpus`
      self$`benchmark` <- this_object$`benchmark`
      self$`monthly_price` <- this_object$`monthly_price`
      self$`monthly_price_display` <- this_object$`monthly_price_display`
      self$`max_ram` <- this_object$`max_ram`
      self$`min_ram` <- this_object$`min_ram`
      self$`max_lff` <- this_object$`max_lff`
      self$`max_sff` <- this_object$`max_sff`
      self$`max_nve` <- this_object$`max_nve`
      self$`visible` <- this_object$`visible`
      self$`active` <- this_object$`active`
      self$`memory_det` <- MemoryOption$new()$fromJSON(jsonlite::toJSON(this_object$`memory_det`, auto_unbox = TRUE, digits = NA))
      self$`hd_det` <- HardDrive$new()$fromJSON(jsonlite::toJSON(this_object$`hd_det`, auto_unbox = TRUE, digits = NA))
      self$`monthly_fee` <- this_object$`monthly_fee`
      self
    },

    #' @description
    #' Validate JSON input with respect to CpuWithDefaults and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of CpuWithDefaults
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
# CpuWithDefaults$unlock()
#
## Below is an example to define the print function
# CpuWithDefaults$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# CpuWithDefaults$lock()

