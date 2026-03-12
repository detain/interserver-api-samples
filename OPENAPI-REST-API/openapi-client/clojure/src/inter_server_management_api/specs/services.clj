(ns inter-server-management-api.specs.services
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def services-data
  {
   })

(def services-spec
  (ds/spec
    {:name ::services
     :spec services-data}))
