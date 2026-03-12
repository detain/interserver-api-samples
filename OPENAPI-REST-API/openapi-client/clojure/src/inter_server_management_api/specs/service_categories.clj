(ns inter-server-management-api.specs.service-categories
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def service-categories-data
  {
   })

(def service-categories-spec
  (ds/spec
    {:name ::service-categories
     :spec service-categories-data}))
