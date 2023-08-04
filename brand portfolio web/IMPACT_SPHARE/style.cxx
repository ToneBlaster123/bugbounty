/* Reset default margin and padding */
body, h1, h2, p, ul, li {
  margin: 0;
  padding: 0;
}

body {
  font-family: Arial, sans-serif;
  background: linear-gradient(to bottom, #003049, #001E36); /* Dark blue gradient background */
  color: #fff; /* White text color */
}

.container {
  max-width: 1200px;
  margin: 0 auto;
  padding: 20px;
}

/* Header styles */
header {
  background: rgba(0, 48, 73, 0.8); /* Semi-transparent background for the header */
  padding: 10px 0;
}

.logo {
  font-size: 24px;
  font-weight: bold;
  color: #fff;
  margin-right: 20px;
}

.menu {
  list-style: none;
}

.menu li {
  display: inline-block;
  margin-right: 20px;
}

.menu li a {
  color: #fff;
  text-decoration: none;
}

/* Section styles */
.section {
  padding: 50px 0;
  text-align: center;
}

.section h2 {
  font-size: 36px;
  margin-bottom: 20px;
}

.section p {
  font-size: 18px;
  margin-bottom: 30px;
}

/* Call-to-action button styles */
.cta-button {
  display: inline-block;
  background: #F77F00; /* Orange button background */
  color: #fff;
  font-size: 18px;
  padding: 15px 30px;
  border-radius: 5px;
  text-decoration: none;
  transition: background 0.3s ease;
}

.cta-button:hover {
  background: #FF9D4C; /* Lighter orange on hover */
}

/* Additional styling for floating 3D effect (customize as needed) */
/* Example for header */
header {
  position: relative;
}

.logo, .menu li a {
  position: relative;
  z-index: 2;
}

.logo::before, .menu li a::before {
  content: '';
  position: absolute;
  top: 3px;
  left: -5px;
  width: 100%;
  height: 100%;
  background: rgba(0, 0, 0, 0.1);
  transform: skew(-15deg);
  z-index: -1;
}

.menu li a::before {
  left: -10px;
}

/* Example for sections */
.section h2, .section p, .cta-button {
  position: relative;
  z-index: 2;
  transform: translateZ(30px);
}
