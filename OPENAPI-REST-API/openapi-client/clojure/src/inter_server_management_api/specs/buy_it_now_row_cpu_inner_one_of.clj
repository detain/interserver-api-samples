(ns inter-server-management-api.specs.buy-it-now-row-cpu-inner-one-of
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def buy-it-now-row-cpu-inner-one-of-data
  {
   (ds/opt :img) string?
   (ds/opt :type) string?
   (ds/opt :speed) string?
   (ds/opt :num_cpus) string?
   (ds/opt :num_cores) string?
   })

(def buy-it-now-row-cpu-inner-one-of-spec
  (ds/spec
    {:name ::buy-it-now-row-cpu-inner-one-of
     :spec buy-it-now-row-cpu-inner-one-of-data}))
