(ns inter-server-management-api.specs.cpu-with-defaults
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.memory-option :refer :all]
            [inter-server-management-api.specs.hard-drive :refer :all]
            )
  (:import (java.io File)))


(def cpu-with-defaults-data
  {
   (ds/opt :id) int?
   (ds/opt :short_desc) string?
   (ds/opt :long_desc) string?
   (ds/opt :type) string?
   (ds/opt :speed) string?
   (ds/opt :num_cores) string?
   (ds/opt :num_cpus) string?
   (ds/opt :benchmark) string?
   (ds/opt :monthly_price) float?
   (ds/opt :monthly_price_display) string?
   (ds/opt :max_ram) string?
   (ds/opt :min_ram) string?
   (ds/opt :max_lff) string?
   (ds/opt :max_sff) string?
   (ds/opt :max_nve) string?
   (ds/opt :visible) string?
   (ds/opt :active) string?
   (ds/opt :memory_det) memory-option-spec
   (ds/opt :hd_det) hard-drive-spec
   (ds/opt :monthly_fee) string?
   })

(def cpu-with-defaults-spec
  (ds/spec
    {:name ::cpu-with-defaults
     :spec cpu-with-defaults-data}))
