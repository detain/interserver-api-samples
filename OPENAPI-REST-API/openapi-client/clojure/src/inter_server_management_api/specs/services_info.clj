(ns inter-server-management-api.specs.services-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.modules :refer :all]
            [inter-server-management-api.specs.services :refer :all]
            [inter-server-management-api.specs.service-types :refer :all]
            [inter-server-management-api.specs.service-categories :refer :all]
            )
  (:import (java.io File)))


(def services-info-data
  {
   (ds/req :modules) modules-spec
   (ds/req :services) services-spec
   (ds/req :serviceTypes) service-types-spec
   (ds/req :serviceCategories) service-categories-spec
   })

(def services-info-spec
  (ds/spec
    {:name ::services-info
     :spec services-info-data}))
