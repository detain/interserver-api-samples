(ns inter-server-management-api.specs.website-extra-info-tables
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.website-table :refer :all]
            [inter-server-management-api.specs.website-table :refer :all]
            [inter-server-management-api.specs.website-table :refer :all]
            )
  (:import (java.io File)))


(def website-extra-info-tables-data
  {
   (ds/opt :links) website-table-spec
   (ds/opt :preview) website-table-spec
   (ds/opt :dns) website-table-spec
   })

(def website-extra-info-tables-spec
  (ds/spec
    {:name ::website-extra-info-tables
     :spec website-extra-info-tables-data}))
