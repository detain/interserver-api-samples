(ns inter-server-management-api.specs.monthly-counts
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def monthly-counts-data
  {
   })

(def monthly-counts-spec
  (ds/spec
    {:name ::monthly-counts
     :spec monthly-counts-data}))
