(ns inter-server-management-api.specs.website-table-row
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def website-table-row-data
  {
   (ds/opt :desc) string?
   (ds/opt :value) string?
   })

(def website-table-row-spec
  (ds/spec
    {:name ::website-table-row
     :spec website-table-row-data}))
