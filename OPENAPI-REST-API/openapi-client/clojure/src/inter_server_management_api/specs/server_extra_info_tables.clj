(ns inter-server-management-api.specs.server-extra-info-tables
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.server-assets :refer :all]
            )
  (:import (java.io File)))


(def server-extra-info-tables-data
  {
   (ds/req :assets) server-assets-spec
   })

(def server-extra-info-tables-spec
  (ds/spec
    {:name ::server-extra-info-tables
     :spec server-extra-info-tables-data}))
