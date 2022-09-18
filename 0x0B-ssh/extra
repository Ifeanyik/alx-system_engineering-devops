# this script configures the client
# to authenticate without a password

$string = 'Host 3.229.142.17
  PasswordAuthentication no
  IdentityFile ~/.ssh/school'
file { '~/.ssh/config':
  ensure  => absent,
  content => $string
}
