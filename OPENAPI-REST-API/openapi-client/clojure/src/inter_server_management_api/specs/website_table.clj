(ns inter-server-management-api.specs.website-table
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.website-table-row :refer :all]
            )
  (:import (java.io File)))


(def website-table-data
  {
   (ds/opt :title) string?
   (ds/opt :rows) (s/coll-of website-table-row-spec)
   })

(def website-table-spec
  (ds/spec
    {:name ::website-table
     :spec website-table-data}))
