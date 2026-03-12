(ns inter-server-management-api.specs.server-order-cpu
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs. :refer :all]
            )
  (:import (java.io File)))


(def server-order-cpu-data
  {
   (ds/opt :id) string?
   (ds/opt :price) int?
   (ds/opt :img) string?
   (ds/opt :short_desc) string?
   (ds/opt :long_desc) string?
   (ds/opt :location) string?
   (ds/opt :fsb) string?
   (ds/opt :manu) string?
   (ds/opt :type) string?
   (ds/opt :speed) string?
   (ds/opt :cache) string?
   (ds/opt :active) string?
   (ds/opt :num_cores) string?
   (ds/opt :num_cpus) string?
   (ds/opt :benchmark) string?
   (ds/opt :monthly_price) int?
   (ds/opt :max_ram) string?
   (ds/opt :min_ram) string?
   (ds/opt :max_lff) string?
   (ds/opt :max_sff) string?
   (ds/opt :max_nve) string?
   (ds/opt :visible) string?
   (ds/opt :hd_ids) any-type-spec
   (ds/opt :price_display) string?
   (ds/opt :monthly_price_display) string?
   })

(def server-order-cpu-spec
  (ds/spec
    {:name ::server-order-cpu
     :spec server-order-cpu-data}))
