(ns inter-server-management-api.specs.home-details
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.home-details-modules :refer :all]
            )
  (:import (java.io File)))


(def home-details-data
  {
   (ds/opt :modules) home-details-modules-spec
   })

(def home-details-spec
  (ds/spec
    {:name ::home-details
     :spec home-details-data}))
