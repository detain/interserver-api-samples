(ns inter-server-management-api.specs.service-types
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def service-types-data
  {
   })

(def service-types-spec
  (ds/spec
    {:name ::service-types
     :spec service-types-data}))
